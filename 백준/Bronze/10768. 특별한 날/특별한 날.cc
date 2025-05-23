#include <iostream>
using namespace std;

int main() {
    int M, D;
    cin >> M;
    cin >> D;
    if (M == 2 && D == 18) cout << "Special";
    else if ((D < 18 && M == 2) || M == 1) cout << "Before";
    else cout << "After";
}