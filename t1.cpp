#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int a = 0; a < sqrt(x); a++) {
        for (int b = a; b < sqrt(x - a * a); b++) {
            for (int c = b; c < sqrt(x - a * a - b * b); c++) {
                for (int d = c; d <= sqrt(x - a * a - b * b - c * c); d++) {
                    if (a * a + b * b + c * c + d * d == x) {
                        cout << a << " " << b << " " << c << " " << d << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}