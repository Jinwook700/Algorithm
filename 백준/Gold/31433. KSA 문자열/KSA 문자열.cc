#include <iostream>
using namespace std;

int main() {
    string X; cin >> X;
    int num = X.length();
    if (X == "A" || X == "S") cout << 2;
    else if(X == "AA") cout << 4;
    else cout << (num-1)*2;
}