#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int a, b; cin >> a >> b;
        cout << gcd(a,b) << "\n";
    }
}