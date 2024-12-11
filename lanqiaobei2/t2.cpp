#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int w, m, n;
	cin >> w >> m >> n;
	int m1, m2;
	int n1, n2;
	m1 = m / w;
	m2 = m % w;
	if (m2 != 0) {
		m1++;
	}
	n1 = n / w;
	n2 = n % w;
	if (n2 != 0) {
		n1++;
	}
	int ans = abs(m1 - n1);
	if (m1 % 2 == n1 % 2) {
		ans += abs(m2 - n2);
	}
	else {
		if (m2 + n2 > w) {
			ans += abs((m2 + n2) % w - 1);
		}
		else {
			ans += w - m2 - n2 + 1;
		}
	}
	cout << ans << endl;

	return 0;

}