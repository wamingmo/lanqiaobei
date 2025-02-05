/*题目描述
请你设计一个程序对该问题进行解答。

众所周知在扑克牌中，有一个老掉牙的游戏叫做
24
24 点，选取
4
4 张牌进行加减乘除，看是否能得出
24
24 这个答案。

现在小蓝同学发明了一个新游戏，他从扑克牌中依次抽出6张牌，注意不是一次抽出，进行计算，看是否能够组成
42
42 点,满足输出 YES，反之输出 NO。

最先抽出来的牌作为第一个操作数，抽出牌做第二个操作数，运算结果再当作第一个操作数，继续进行操作。

注：除不尽的情况保留整数，而且扑克牌的四张
10
10 都丢了，不会出现
10
10，1和A都可能出现并表示1。

请设计一个程序对该问题进行解答。

输入描述
输出仅一行包含
6
6 个字符。

保证字符
∈
∈ 1 2 3 4 5 6 7 8 9 J Q K A。

输出描述
若给出到字符能够组成
42
42 点 , 满足输出 YES，反之输出 NO。*/

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