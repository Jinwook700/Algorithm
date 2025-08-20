#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            int a, b; cin >> a >> b;
            cout << "Case " << i+1 << ": ";
            if (a % b == 0) cout << a/b << "\n";
            else if (a < b) cout << a << "/" << b << "\n";
            else cout << a/b << " " << a%b << "/" << b << "\n";
        }
}