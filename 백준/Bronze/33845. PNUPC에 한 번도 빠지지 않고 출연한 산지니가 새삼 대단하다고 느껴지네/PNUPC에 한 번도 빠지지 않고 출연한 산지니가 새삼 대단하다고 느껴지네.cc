#include <iostream>
#include <set>
using namespace std;

int main() {
    string S, T; cin >> S >> T;
    set<char> set1;
    for (char c : S) set1.insert(c);
    for (char c : T) if (set1.count(c) == 0) cout << c;
}