#include <bits/stdc++.h>

using namespace std;
int n, k;
vector<int> chosen_zh;

int order[20];
bool chosen_pl[20];

void calc_zh(int x)
{
    if (chosen_zh.size() > k || chosen_zh.size() + (n - x + 1) < k)
    {
        return;
    }
    if (x == n + 1)
    {
        for (int i = 0; i < chosen_zh.size(); i++)
        {
            cout << chosen_zh[i] << " ";
        }
        cout << endl;
    }
    chosen_zh.push_back(x);
    calc_zh(x + 1);
    chosen_zh.pop_back();
    calc_zh(x + 1);
}

void calc_pl(int x)
{
    if (x == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << order[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (chosen_pl[i])
        {
            continue;
        }
        chosen_pl[i] = 1;
        order[x] = i;
        calc_pl(x + 1);
        order[x] = 0;
        chosen_pl[i] = 0;
    }
}

int main()
{
    cin >> n >> k;
    calc_zh(1);
    // calc_pl(1);
    return 0;
}