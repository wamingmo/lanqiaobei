#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long sum1 = 0;
    long long sum2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j)
            {
                sum1 += (n - i + 1) * (m - j + 1);
            }
            else
            {
                sum2 += (n - i + 1) * (m - j + 1);
            }
        }
    }
    cout << sum1 << " " << sum2;
}