#include <iostream>
using namespace std;

int main() {
    while (true)
        {
            float a, b; cin >> a >> b;
            if (a == 0 && b == 0)
            {
                cout << "AXIS";
                break;
            }

            if (a == 0 || b == 0) cout << "AXIS" << "\n";
            else if (a > 0 && b > 0) cout << "Q1" << "\n";
            else if (a < 0 && b > 0) cout << "Q2" << "\n";
            else if (a < 0 && b < 0) cout << "Q3" << "\n";
            else if (a > 0 && b < 0) cout << "Q4" << "\n";
        }

    return 0;
}