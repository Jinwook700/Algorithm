#include <iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    int canBread = A/2;
    cout << (canBread >= B ? B : canBread);

    return 0;
}