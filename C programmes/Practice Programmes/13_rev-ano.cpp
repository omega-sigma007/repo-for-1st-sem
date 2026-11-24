#include <iostream>
using namespace std;
int main()
{
    int n, x, rev = 0;
    cout << "n = ";
    cin >> n;
    for (x = n; n != 0; n /= 10)
        rev = rev * 10 + n % 10;
    cout << "rev = " << rev;
    return 0;
}