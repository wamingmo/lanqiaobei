#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, bool> m;
    string word;
    while (n--)
    {
        cin >> word;
        if (m[word])
        {
            cout << word << endl;
            return 0;
        }
        m[word] = true;
    }
    cout << "NO" << endl;
    return 0;
}