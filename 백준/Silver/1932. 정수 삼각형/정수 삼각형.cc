#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<int>> v(N, vector<int>());
    vector<vector<int>> dp(N, vector<int>());
    for (int i=1; i<=N; i++)
        {
            for (int j=0; j<i; j++)
                {
                    int num; cin >> num;
                    v[i-1].push_back(num);
                    dp[i-1].push_back(0);
                }
        }

    dp[0][0] = v[0][0];
    for (int i=1; i<N; i++)
        {
            for (int j=0; j<i+1; j++)
                {
                    if (j == 0)
                    {
                        dp[i][j] = dp[i-1][j] + v[i][j];
                    }
                    else if (j == i)
                    {
                        dp[i][j] = dp[i-1][j-1] + v[i][j];
                    }
                    else
                    {
                        dp[i][j] = max(dp[i-1][j] + v[i][j], dp[i-1][j-1] + v[i][j]);
                    }             
                }
        }
    vector<int> result(dp[N-1].begin(), dp[N-1].end());
    sort(result.begin(), result.end(), greater<>());
    cout << result[0];
}