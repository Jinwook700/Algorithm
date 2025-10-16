#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string S; cin >> S;
    int q; cin >> q;
    int length = S.length();
    vector<vector<int>> v(26, vector<int>(length, 0)); 

    for (int i=0; i<26; i++)
        {
            char alphabet = 'a' + i;
            for (int j=0; j<length; j++)
                {
                    if (j == 0)
                    {
                        if (S[0] == alphabet) v[i][0] = 1;
                    }
                    else if (S[j] == alphabet) v[i][j] = v[i][j-1] + 1;
                    else v[i][j] = v[i][j-1];
                }
        }
    
    while(q--)
        {
            char ch; cin >> ch;
            int a, b; cin >> a >> b;
            int index = ch - 'a';
            if (a == 0) cout << v[index][b] << "\n";
            else cout << v[index][b] - v[index][a-1] << "\n";
        }
}