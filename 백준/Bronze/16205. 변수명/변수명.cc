#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    for (n = 1; n < 4; n++) {
        if (n == 1 || n == 3) {
            bool flag = false;
            bool isFirst = false;
            bool isFront = false;

            if (n == 1) isFront = true;
            if (n == 3) isFirst = true;

            for (char c : str) {
                if (isFront) {
                    cout << (char)tolower(c);
                    isFront = false;
                }
                else if (isFirst) {
                    cout << (char)toupper(c);
                    isFirst = false;
                }
                else if (flag) {
                    cout << (char)toupper(c);
                    flag = false;
                }
                else if (c == '_') {
                    flag = true;
                    continue;
                }
                else {
                    cout << c;
                }
            }
            cout << "\n";
        }

        else if (n == 2) {
            bool isFront = true;

            for (char c : str) {
                if (isFront) {
                    cout << (char)tolower(c);
                    isFront = false;
                }
                else if (c >= 'A' && c <= 'Z') {
                    cout << '_' << (char)tolower(c);
                }
                else {
                    cout << c;
                }
            }
            cout << "\n";
        }
    }
}
