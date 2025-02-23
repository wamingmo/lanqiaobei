/*学校正在选举学生会成员，有 n（n≤999）名候选人，每名候选人编号分别从 1 到 n，现在收集到了 m（m≤2000000）张选票，每张选票都写了一个候选人编号。现在想把这些堆积如山的选票按照投票数字从小到大排序。

输入格式
输入 n 和 m 以及 m 个选票上的数字。

输出格式
求出排序后的选票编号。*/

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int *a = new int[2000001];
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m, cmp);
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}