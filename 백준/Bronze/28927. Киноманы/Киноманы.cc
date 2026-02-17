#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int d, e, f; cin >> d >> e >> f;
    int result1 = a * 3 + b * 20 + c * 120;
    int result2 = d * 3 + e * 20 + f * 120;
    if (result1 > result2) cout << "Max";
    else if (result1 < result2) cout << "Mel";
    else cout << "Draw";
}