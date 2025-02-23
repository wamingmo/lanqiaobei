/*题目描述
将整数
n
n 分成
k
k 份，且每份不能为空，任意两份不能相同(不考虑顺序)。

例如：
n
=
7
，
k
=
3
n=7，k=3，下面三种分法被认为是相同的。

1
，
1
，
5
;
1
，
5
，
1
;
5
，
1
，
1
;
1，1，5;1，5，1;5，1，1;

问有多少种不同的分法。

输入描述
输入一行，
2
2 个整数
n
,
k

(
6
≤
n
≤
200
，
2
≤
k
≤
6
)
n,k (6≤n≤200，2≤k≤6)。

输出描述
输出一个整数，即不同的分法。*/
#include <iostream>
using namespace std;

int main()
{
    // 请在此输入您的代码
    int a[201][201];
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= 200; i++)
    {
        for (int j = i; j <= 200; j++)
        {
            if (j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j == 1)
            {
                a[i][j] = 1;
            }
            else if (j >= i)
            {
                continue;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - j][j];
            }
        }
    }
    cout << a[n][k] << endl;

    return 0;
}