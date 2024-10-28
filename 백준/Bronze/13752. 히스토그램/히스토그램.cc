#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int k; cin >> k;
        for (int j=0; j<k; j++) cout << "=";
        cout << "\n";
    }
}