#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int i=0; i<5; i++) {
        int N; cin >> N;
        total += N;
    }
    cout << total;
}