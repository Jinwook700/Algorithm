#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void CheckString(vector<char> v1, vector<char> v2, bool& flag)
{
    int size = v2.size();
    for (int i=0; i<size; i++)
        {
            if (v1[i] == '*') break;
            if (v2[i] == v1[i]) continue;
            else
            {
                flag = false;
                break;
            }
        }
}

int main() {
    int N; cin >> N;
    string origin; cin >> origin;
    
    while(N--)
        {
            string str; cin >> str;
            vector<char> originV(origin.begin(), origin.end());
            vector<char> V(str.begin(), str.end());
            bool flag = true;

            CheckString(originV, V, flag);
            
            reverse(originV.begin(), originV.end());
            reverse(V.begin(), V.end());

            CheckString(originV, V, flag);

            if (originV.size() - 1 > V.size()) cout << "NE" << "\n";
            else if (flag) cout << "DA" << "\n";
            else cout << "NE" << "\n";
        }
}