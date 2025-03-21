#include <iostream>
#include <vector>
#include <string>
using namespace std;

// int n;
// vector<string> names;
// int order[20];
// bool chosen[20];

// void calc(int k)
// {
//     if (k == n + 1)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << names[order[i] - 1] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (chosen[i])
//         {
//             continue;
//         }
//         order[k] = i;
//         chosen[i] = true;
//         calc(k + 1);
//         order[k] = 0;
//         chosen[i] = false;
//     }
// }
// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         cin >> name;
//         names.push_back(name);
//     }
//     calc(1);

//     return 0;
// }
int n;
int order[20];
bool chosen[20];

void calc(int k)
{
    if (k == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << order[i] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (chosen[i])
        {
            continue;
        }
        order[k] = i;
        chosen[i] = true;
        calc(k + 1);
        order[k] = 0;
        chosen[i] = false;
    }
}

int main()
{
    cin >> n;
    calc(1);
}