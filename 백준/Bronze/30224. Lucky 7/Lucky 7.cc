#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    bool first = false, second = false;
    
    for (char c: str)
        {
            if (c == '7') first = true;
        }

    int num = stoi(str);
    if (num % 7 == 0) second = true;

    if (!first && !second) cout << 0;
    else if (!first && second) cout << 1;
    else if (first && !second) cout << 2;
    else if (first && second) cout << 3;

    return 0;
}