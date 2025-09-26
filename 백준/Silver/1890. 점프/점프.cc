#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<vector<int>> v(N, vector<int>(N, 0));
    vector<vector<long>> dp(N, vector<long>(N, 0));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    cin >> v[i][j];
                }
        }

    dp[0][0] = 1;
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    if (i == N-1 && j == N-1) break;
                    int x = v[i][j];
                    if (i+x < N) dp[i+x][j] += dp[i][j];
                    if (j+x < N)dp[i][j+x] += dp[i][j];
                }
        }
    cout << dp[N-1][N-1];
}