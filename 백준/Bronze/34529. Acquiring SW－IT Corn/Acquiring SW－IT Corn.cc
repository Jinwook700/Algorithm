#include <iostream>
using namespace std;

int main() {
    int X, Y, Z; cin >> X >> Y >> Z;
    int U, V, W; cin >> U >> V >> W;
    cout << U/100*X + V/50*Y + W/20*Z;
}