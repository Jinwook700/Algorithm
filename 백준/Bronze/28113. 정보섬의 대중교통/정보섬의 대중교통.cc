#include <iostream>
using namespace std;

int main() {
    int N, A, B; cin >> N >> A >> B;
    if (A == max(N, B)) cout << "Anything";
    else if (A < max(N, B)) cout << "Bus";
    else cout << "Subway";
}