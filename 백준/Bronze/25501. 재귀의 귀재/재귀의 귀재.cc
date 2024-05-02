#include <iostream>
using namespace std;

void recursion(string s, int l, int r, int count){
    if(l >= r) {
        cout << 1 << " " << count << "\n";
        return;
    }
    else if(s[l] != s[r]) {
        cout << 0 << " " << count << "\n";
        return;
    }
    else return recursion(s, l+1, r-1, count+1);
}

void isPalindrome(string s){
    return recursion(s, 0, s.length()-1, 1);
}

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++) {
        string S; cin >> S;
        isPalindrome(S);
    }
}