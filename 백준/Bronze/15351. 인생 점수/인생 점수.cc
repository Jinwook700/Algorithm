#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    cin.ignore();
    for (int i=0; i<N; i++) {
        string s; getline(cin, s);
        int result = 0;
        for (char c : s) {
            if (c != ' ')result += c-'A'+1;
        }
        if (result == 100) cout << "PERFECT LIFE" << "\n";
        else cout << result << "\n";
    }
}