/*阿里巴巴走进了装满宝藏的藏宝洞。藏宝洞里面有 N(N≤100) 堆金币，第 i 堆金币的总重量和总价值分别是 m
i
​
 ,v
i
​
 (1≤m
i
​
 ,v
i
​
 ≤100)。阿里巴巴有一个承重量为 T(T≤1000) 的背包，但并不一定有办法将全部的金币都装进去。他想装走尽可能多价值的金币。所有金币都可以随意分割，分割完的金币重量价值比（也就是单位价格）不变。请问阿里巴巴最多可以拿走多少价值的金币？

输入格式
第一行两个整数 N,T。

接下来 N 行，每行两个整数 m
i
​
 ,v
i
​
 。

输出格式
一个实数表示答案，输出两位小数*/

#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

struct node
{
    int num;
    double value;

    bool operator<(const node &a) const
    {
        return value / num < a.value / a.num;
    }
};

int main()
{
    int n, t;
    cin >> n >> t;
    priority_queue<node> q;
    while (n--)
    {
        node a;
        cin >> a.num >> a.value;
        q.push(a);
    }
    double ans = 0;
    while (!q.empty())
    {
        node b = q.top();
        if (t >= b.num)
        {
            ans += b.value;
            t -= b.num;
            q.pop();
        }
        else
        {
            ans += b.value * t / b.num;
            break;
        }
    }
    cout << fixed << setprecision(2) << ans;

    return 0;
}