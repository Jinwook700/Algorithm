#include <iostream>
using namespace std;

int main() {
    int n, um;
    cin >> n;
    um = n%8;
    if (um == 0) cout << 2;
    else if (um == 7) cout << 3;
    else if (um == 6) cout << 4;
    else cout << um;
}