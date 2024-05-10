#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int F; cin >> F;
    int num = N - N%100;
    for (int i=0; i<100; i++) {
        if (num%F == 0) break;
        num ++;
    }
    if (num%100 < 10) cout << "0" << num%100;
    else cout << num%100;
}