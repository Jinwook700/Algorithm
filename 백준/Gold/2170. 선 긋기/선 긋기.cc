#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    vector<pair<int, int>> v;
    for (int i=0; i<N; i++)
        {
            int start, end; cin >> start >> end;
            v.push_back({start, end});
        }
    sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
        return a.first<b.first;
    });

    long long result = 0;
    int beforeStart = v[0].first;
    int beforeEnd = v[0].second;
    for (int i=1; i<N; i++)
        {
            if (v[i].first <= beforeEnd && v[i].second <= beforeEnd) continue;
            else if (v[i].first <= beforeEnd && v[i].second > beforeEnd)
            {
                beforeEnd = v[i].second;
            }
            else
            {
                result += beforeEnd - beforeStart;
                beforeStart = v[i].first;
                beforeEnd = v[i].second;
            }
        }
    cout << result + beforeEnd - beforeStart;
}