#include <iostream>
using namespace std;

int main() {
    float n1, n2, n12; cin >> n1 >> n2 >> n12;
    float N; cin >> N;

    cout << (int)((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);
}