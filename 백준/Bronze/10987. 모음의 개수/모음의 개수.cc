#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    int result = 0;
    for (char c : str)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                result++;
        }

    cout << result;
}