#include <iostream>
using namespace std;

int main() {
    int K; cin >> K;
    for (int i=0; i<K; i++) {
        int n; cin >> n;
        string s; cin >> s;
        int result = 0;
        for (int j=0; j<n; j++) {
            string str; cin >> str;
            int count = 0;
            for (char c : str) {
                for (char ch : s) {
                    if (c == ch) count = 1;
                }
            }
            if (count == 1) result += 1;
        }
        cout << "Data Set " << i+1 << ":" << "\n";
        cout << result << "\n";
        cout << "\n";
    }
}