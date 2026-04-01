#include <iostream>
using namespace std;

int main() {
    int T, S; cin >> T >> S;
    if (T <= 11 || T >= 17 || S == 1) cout << 280;
    else if (12 <= T && T <= 16 && S == 0) cout << 320;
}