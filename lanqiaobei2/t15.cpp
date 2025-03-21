#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, vector<string>> trans;
    vector<string> city_;
    int n;
    cin >> n;
    string num, city;
    while (n--)
    {
        cin >> num >> city;
        if (trans[city].size() == 0)
        {
            city_.push_back(city);
        }
        trans[city].push_back(num);
    }
    for (auto t : city_)
    {
        cout << t << " " << trans[t].size() << endl;
        for (auto t2 : trans[t])
        {
            cout << t2 << endl;
        }
    }

    return 0;
}