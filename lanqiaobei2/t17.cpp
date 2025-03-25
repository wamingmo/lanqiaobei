#include <bits/stdc++.h>

using namespace std;
int n, r;
vector<int> chosen;
void calc(int x)
{
    if (chosen.size() > r || chosen.size() + (n - x + 1) < r)
    {
        return;
    }
    if (x == n + 1)
    {
        for (int i = 0; i < chosen.size(); i++)
        {
            cout << setw(3) << chosen[i];
        }
        cout << endl;
    }

    chosen.push_back(x);
    calc(x + 1);
    chosen.pop_back();
    calc(x + 1);
}

int main()
{

    cin >> n >> r;
    calc(1);

    return 0;
}