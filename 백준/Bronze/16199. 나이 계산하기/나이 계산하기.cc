#include <iostream>
using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    int q,w,e; cin >> q >> w >> e;
    bool birthday = false;
    if ((w == b && e >= c) || w > b) birthday = true;

    if (birthday) cout << q - a << "\n";
    else if (q - a == 0) cout << 0 << "\n";
    else cout << q - a - 1 << "\n";
        
    cout << q - a + 1 << "\n";

    cout << q - a;
}