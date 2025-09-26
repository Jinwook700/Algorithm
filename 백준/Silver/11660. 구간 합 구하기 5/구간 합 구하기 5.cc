#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M; cin >> N >> M;
    vector<vector<int>> v(N, vector<int>(N, 0));
    vector<vector<int>> dp(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    cin >> v[i][j];
                    if (i == 0 && j == 0) dp[i][j] = v[i][j];
                    if (i == 0 && j != 0) dp[i][j] = dp[i][j-1] + v[i][j];
                }
        }
    for (int i=1; i<N; i++)
        {
            vector<int> value(N, 0);
            for (int j=0; j<N; j++)
                {
                    if (j == 0) value[j] = v[i][j];
                    else value[j] = value[j-1] + v[i][j];
                    dp[i][j] = dp[i-1][j] + value[j];
                }
        }
    for (int i=0; i<M; i++)
        {
            int a,b,c,d; cin >> a >> b >> c >> d;
            if (a == 1 && b == 1) cout << dp[c-1][d-1] << "\n";
            else if (a == 1) cout << dp[c-1][d-1] - dp[c-1][b-2] << "\n";
            else if (b == 1) cout << dp[c-1][d-1] - dp[a-2][d-1] << "\n";
            else cout << dp[c-1][d-1] - dp [c-1][b-2] - dp[a-2][d-1] + dp[a-2][b-2] << "\n";
        }
}