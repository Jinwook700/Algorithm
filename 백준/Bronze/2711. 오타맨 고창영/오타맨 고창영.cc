#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int num; string str;
        cin >> num >> str;
        for (int j=0; j<str.length(); j++) {
            if (j+1 != num) cout << str[j];
        }
        cout << "\n";
    }
}