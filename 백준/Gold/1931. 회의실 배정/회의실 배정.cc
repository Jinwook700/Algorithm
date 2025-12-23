#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N; cin >> N;
    int T = N;
    vector<pair<int, int>> v;
    while(T--)
        {
            int a, b; cin >> a >> b;
            v.push_back({a, b});
        }
    
    sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>&b){
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    int answer = 1;
    int finishTime = v[0].second;
    for (int i=1; i<N; i++)
        {
            if (v[i].first >= finishTime)
            {
                answer++;
                finishTime = v[i].second;
            }
        }
    cout << answer;
}