#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    long double a,b,c; cin >> a >> b >> c;
    cout << (int)max(a*b/c, a/b*c);
}