#include <iostream>
#include <string>
using namespace std;

bool cal(int op1, int op2, int i, int *b)
{
    int res[4];
    bool ans = false;
    res[0] = op1 + op2;
    res[1] = op1 - op2;
    res[2] = op1 * op2;
    res[3] = op1 / op2;
    if (i == 5)
    {
        if (res[0] == 42 || res[1] == 42 || res[2] == 42 || res[3] == 42)
        {
            return true;
        }
        else
            return false;
    }
    for (int j = 0; j < 4; j++)
    {
        ans = cal(res[j], b[i + 1], i + 1, b);
        if (ans)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char a;
    int b[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        if (a == 'J')
        {
            b[i] = 11;
        }
        else if (a == 'Q')
        {
            b[i] = 12;
        }
        else if (a == 'K')
        {
            b[i] = 13;
        }
        else if (a == 'A')
        {
            b[i] = 1;
        }
        else
        {
            b[i] = a - '0';
        }
    }

    bool c = cal(b[0], b[1], 1, b);
    if (c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}