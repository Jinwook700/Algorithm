#include <iostream>
using namespace std;

int main() {
    while(true)
        {
            int a,b,c; cin >> a >> b >> c;
            if (a == 0 && b == 0 && c == 0)break;
            if (b*b == a*c)
            {
                cout << "GP " << c*(c/b)<<"\n";
            }
            else
            {
                cout << "AP " << 2*c - b << "\n"; 
            }
        }
}
