#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    int a, b, c;
    bool isPlus = false;
    for (int i = 0; i < T; i++)
        {
            int num; cin >> num;
            if (i == 0) a = num;
            else if (i == 1) b = num;
            else if (i == 2) c = num;
            if (i == 2)
            {
                if (c - b == b - a) isPlus = true;
            }

            if (i == T - 1)
            {
                if (isPlus) cout << num + b - a;
                else cout << num * (c / b);
            }
        }
}