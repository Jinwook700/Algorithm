#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M; cin >> N >> M;
    unordered_map<string, string> um;
    while(N--)
        {
            string site, password; cin >> site >> password;
            um[site] = password;
        }
    while(M--)
        {
            string str; cin >> str;
            cout << um[str] << "\n";
        }
}