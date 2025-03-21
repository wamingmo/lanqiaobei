#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    // 请在此输入您的代码
    queue<string> vip;
    queue<string> normal;
    int m;
    cin >> m;
    while (m--)
    {
        string op, name, type;
        cin >> op;
        if (op == "IN")
        {
            cin >> name >> type;
            if (type == "N")
            {
                normal.push(name);
            }
            else if (type == "V")
            {
                vip.push(name);
            }
        }
        else if (op == "OUT")
        {
            cin >> type;
            if (type == "N")
            {
                normal.pop();
            }
            else if (type == "V")
            {
                vip.pop();
            }
        }
    }
    int size = vip.size();
    for (int i = 0; i < size; i++)
    {
        cout << vip.front() << endl;
        vip.pop();
    }
    size = normal.size();
    for (int i = 0; i < size; i++)
    {
        cout << normal.front() << endl;
        normal.pop();
    }
    return 0;
}