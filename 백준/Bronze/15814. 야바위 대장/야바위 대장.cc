#include <iostream>
using namespace std;

int main() {
    string S; cin >> S;
    int T; cin >> T;
    while(T--)
        {
            int a, b; cin >> a >> b;
            char first = S[a], second = S[b];
            string newS = "";
            for (int i = 0; i < S.size(); i++)
                {
                    if (i == a) newS += second;
                    else if (i == b) newS += first;
                    else newS += S[i];
                }
            S = newS;
        }
    cout << S;
}