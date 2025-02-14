#include <iostream>
using namespace std;

int main()
{
    int f[20][20] = {0};
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        f[i][0] = 1;
    }
    for (int j = 1; j <= n; j++)
    {

        for (int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                f[i][j] = f[i + 1][j - 1];
            }
            else
            {
                f[i][j] = f[i - 1][j] + f[i + 1][j - 1];
            }
        }
    }
    cout << f[0][n] << endl;

    return 0;
}