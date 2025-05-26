#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int count = 0;
    if (n == 1 || n == 3) cout << -1;
    else if (n%2 == 0 && n < 7) cout << n/2;
    else if (n%5 == 1) cout << (n-6)/5 + 3;
    else if (n%5 == 3) cout << (n-8)/5 + 4;
    else cout << n/5 + (n%5)/2;
}