#include <bits/stdc++.h>

using namespace std;
int n, k;
vector<string> name;
vector<int> chosen;
string ans;

void calc(int x)
{
    if (chosen.size() > k || chosen.size() + (n - x + 1) < k)
    {
        return;
    }
    if (x == n + 1)
    {
        for (int i = 0; i < chosen.size(); i++)
        {
            ans += name[chosen[i] - 1];
            ans += " ";
        }
        cout << ans << endl;
        ans = "";
    }
    chosen.push_back(x);
    calc(x + 1);
    chosen.pop_back();
    calc(x + 1);
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string tname;
        cin >> tname;
        name.push_back(tname);
    }
    calc(1);
    return 0;
}