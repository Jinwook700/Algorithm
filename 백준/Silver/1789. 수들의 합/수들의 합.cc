#include <iostream>
using namespace std;

int main() {
    long S; cin >> S;
    long total = 0;
    long i = 1;
    while(true) {
        total += i;
        if (total >= S) break;
        i++;
    }
    if (total == S) cout << i;
    else cout << i-1;
}