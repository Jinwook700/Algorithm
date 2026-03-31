#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a, b; cin >> a >> b;
    cout << (a / b >= N ? 1 : 0);
}
