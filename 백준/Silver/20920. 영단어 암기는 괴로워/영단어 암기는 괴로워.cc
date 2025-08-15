#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    unordered_map<string, int> m;
    for (int i=0; i<N; i++)
        {
            string word; cin >> word;
            if (word.length() >= M) m[word]++;
        }
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<string, int>&a, const pair<string, int>&b){
        if (a.second == b.second)
        {
            if (a.first.length() == b.first.length()) return a.first < b.first;
            return a.first.length() > b.first.length();
        }
        return a.second > b.second;
    });
    int size = v.size();
    for (int i=0; i<size; i++) cout << v[i].first << "\n";
}