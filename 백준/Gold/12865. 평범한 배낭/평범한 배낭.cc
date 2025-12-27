#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    vector<pair<int, int>> v;
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    
    for (int i=0; i<N; i++)
        {
            int W, V; cin >> W >> V;
            v.push_back({W, V});
        }

    for (int i=1; i < N+1; i++)
        {
            for (int j=1; j<K+1; j++)
                {
                    if (j >= v[i-1].first) 
                        dp[i][j] = max(dp[i-1][j], v[i-1].second + dp[i-1][j - v[i-1].first]);
                    else dp[i][j] = dp[i-1][j];
                }
        }

    cout << *max_element(dp[N].begin(), dp[N].end());
}
