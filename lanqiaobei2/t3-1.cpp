//打家劫舍-动态规划
#include<iostream>
#include<cmath>
using namespace std;
int* a = new int[100];

int m(int* nums, int index) {
	if (nums == NULL || index < 0) {
		return 0;
	}
	if (index == 0) {
		return nums[0];
	}

	return max(m(nums, index - 1), m(nums, index - 2) + nums[index]);

}
int* dp = new int[100];
//最有子结构，递推公式，重叠子问题
int m2(int* nums,int n) {
	if (nums == NULL || n < 0) {
		return 0;
	}
	dp[0] = nums[0];
	dp[1] = max(nums[0], nums[1]);
	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
	}
	return dp[n - 1];

}

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << a[0];
		return 0;
	}
	else if (n == 2) {
		cout << max(a[0], a[1]);
		return 0;
	}
	else if (n == 3) {
		cout << max(a[1], a[0] + a[2]);
		return 0;
	}
	cout << m2(a, n) << endl;


	return 0;
}