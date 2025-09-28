#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(3, 0));
    vector<vector<int>> dp(N, vector<int>(3,0));
    for (int i=0; i<N; i++)
        {
            for (int j=0 ; j<3; j++)
                {
                    cin >> v[i][j];
                    if (i == 0) dp[i][j] = v[i][j];
                }
        }
    
    for (int i=1; i<N; i++)
        {
            dp[i][0] = v[i][0] + min(dp[i-1][1], dp[i-1][2]);
            dp[i][1] = v[i][1] + min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] = v[i][2] + min(dp[i-1][0], dp[i-1][1]);
        }
    cout << min({dp[N-1][0], dp[N-1][1], dp[N-1][2]});
}