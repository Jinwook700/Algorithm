#include <iostream>
using namespace std;

int main() {
    int N, T; cin >> N >> T;
    cout << (N > 19 ? 24 - N + T : T - N );
}