#include <bits/stdc++.h>

using namespace std;
int n;

int order[20];
bool chosen[20];
void calc(int x)
{
    if (x == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << setw(5) << order[i];
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (chosen[i])
        {
            continue;
        }
        chosen[i] = 1;
        order[x] = i;
        calc(x + 1);
        order[x] = 0;
        chosen[i] = 0;
    }
}

int main()
{
    cin >> n;
    calc(1);
    return 0;
}