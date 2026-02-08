#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N; cin >> N;
    unordered_map<char, string> un(N);
    for (int i = 0; i < N; i++)
        {
            string first; char second; cin >> first >> second;
            un[second] = first;
        }

    string result; cin >> result;
    string prevStr = "";
    for (char c : result)
        {
            prevStr += un[c];
        }
    int S, E; cin >> S >> E;
    for (int i = S - 1; i < E; i++) cout << prevStr[i];
}