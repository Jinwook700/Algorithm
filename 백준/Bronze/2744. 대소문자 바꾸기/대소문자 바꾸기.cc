#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    string result = "";
    for (char c : s) {
        if (c<96) result += tolower(c);
        else result += toupper(c);
    }
    cout << result;
}