#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c; cin >> a >> b >> c;
    double value = sqrt(a*a - b*b)*sqrt(a*a - c*c) - b*c;
    double result = value/a;
    if ((int)result - result < 0.0000001 && value > 0) cout << result;
    else cout << -1;
}