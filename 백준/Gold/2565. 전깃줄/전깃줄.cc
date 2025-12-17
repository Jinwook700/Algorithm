#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<pair<int, int>> v;
    for (int i=0; i<N; i++)
        {
            int a, b; cin >> a >> b;
            v.push_back({a, b});
        }
    sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
        return a.first < b.first;
    });

    vector<int> vec(N + 1);
    vector<int> dp(N + 1);
    vec[0] = 0;
    dp[0] = 0; dp[1] = 1;
    for (int i=0; i<N; i++) vec[i + 1] = v[i].second;

    for (int i=2; i<N+1; i++)
        for (int j=0; j<i; j++)
            if (vec[j] < vec[i]) dp[i] = max(dp[i], dp[j] + 1);

    sort(dp.begin(), dp.end(), greater<int>());

    cout << N - dp[0];
}