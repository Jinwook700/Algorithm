#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int dif = abs(a - b);
    int zz = c - abs(a - b);
    if (zz%2 == 1) zz--;
    if (dif > c) cout << 2*(min(a, b) + c);
    else cout << max(a, b)*2 + zz;
} 