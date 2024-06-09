#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; cin >> N;
    cin.ignore();
    for (int i=0; i<N; i++) {
        string s; getline(cin, s);
        if (s[s.length()-1] != '.') s +=".";
        cout << s << "\n";
    }
}