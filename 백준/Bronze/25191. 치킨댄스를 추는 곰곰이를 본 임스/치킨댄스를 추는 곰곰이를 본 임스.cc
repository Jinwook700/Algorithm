#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A, B; cin >> A >> B;
    cout << (N >= A/2 + B ? A/2 + B : N);
}