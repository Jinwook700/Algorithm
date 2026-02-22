#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int A = a * a;
    int B = b * b;
    int C = c * c;
    
    if (a == b && b == c) cout << 2;
    else if (A + B == C || B + C == A || C + A == B) cout << 1;
    else cout << 0;

    return 0;
}