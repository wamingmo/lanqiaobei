#include <bits/stdc++.h>

using namespace std;
int n, k, sum;
int num[21];
vector<int> chosen;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

void calc(int x)
{
    if (chosen.size() > k || chosen.size() + (n - x + 1) < k)
    {
        return;
    }
    if (x == n + 1)
    {
        int sum1 = 0;
        for (int i = 0; i < k; i++)
        {
            sum1 += num[chosen[i] - 1];
        }
        if (isPrime(sum1))
        {
            sum++;
        }
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
        cin >> num[i];
    }
    calc(1);
    cout << sum << endl;
    return 0;
}