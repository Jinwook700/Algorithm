#include <iostream>
using namespace std;

int main() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    int sum1 = a + b;
    if (sum1 % 4 == 0) sum1 = 4;
    else sum1 = sum1 % 4;
    int sum2 = sum1 + c + d - 1;
    if (sum2 % 4 == 0) cout << 4;
    else cout << sum2 % 4;
}