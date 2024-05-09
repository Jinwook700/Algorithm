#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio;
    cin.tie(0); cout.tie(0);
    
    while (true) {
        string s; getline(cin, s);
        if (s == ".") break;
        stack<char> st;
        int result = 0;
        for (char c : s) {
            if (c == '(') st.push('(');
            else if (c == '[') st.push('[');
            else if (c == ']') {
                if (st.empty()) {
                        result = 1;
                        break;
                    }
                else if (st.top() == '[') st.pop();
                else {
                    result = 1;
                    break;
                }
            }
            else if (c == ')') {
                    if (st.empty()) {
                        result = 1;
                        break;
                    }
                    else if (st.top() == '(') st.pop();
                    else {
                        result = 1;
                        break;
                    }
                }
            }
        if (!st.empty()) cout << "no" << "\n";
        else if (result == 0) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}
