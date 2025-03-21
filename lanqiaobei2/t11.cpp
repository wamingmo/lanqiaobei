#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;

int n, m, a[MAXN], b[MAXN], cnt, ans, ansl, ansr;

// 加入第x种动物
inline void I(int x)
{
    if (b[x] == 0)
        cnt++; // 如果该动物没有在当前区间中出现过，增加唯一动物数量
    b[x]++;    // 动物x的数量加1
}

// 删除第x种动物
inline void D(int x)
{
    if (b[x] == 1)
        cnt--; // 如果删除后该动物不再在当前区间中出现，减少唯一动物数量
    b[x]--;    // 动物x的数量减1
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]); // 读取每种动物的种类

    ans = n;
    for (int r = 1, l = 1; r <= n; r++)
    {
        I(a[r]); // 首先插入a[r]的动物

        while (true)
        {
            D(a[l]); // 先删a[l]的动物
            if (cnt == m)
                l++; // 如果删了没事，加l
            else
            {
                I(a[l]);
                break; // 删了有事，还留着
            }
        }

        if (cnt == m && r - l + 1 < ans)
        {
            ans = r - l + 1;
            ansl = l;
            ansr = r;
        }
    }

    if (ansl != 0)
        printf("%d %d", ansl, ansr);
    else
        printf("1 %d", n); // 输出+特判：选择任意一个≤n的区间不满足要求，则只好选择区间[1,n]

    return 0;
}
