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

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout <<  0;
		return;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << a[0];
		return;
	}
	else if (n == 2) {
		cout << max(a[0], a[1]);
		return;
	}
	else if (n == 3) {
		cout << max(a[1], a[0] + a[2]);
		return;
	}
	cout << m(a, n - 1) << endl;
	
	
	return 0;
}