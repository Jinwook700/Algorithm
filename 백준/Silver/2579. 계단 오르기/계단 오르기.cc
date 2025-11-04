#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v(N + 1);
    vector<int> dp(N + 1);
    for (int i=1; i<N+1; i++) cin >> v[i];
    dp[1] = v[1];
    dp[2] = v[1] + v[2];
    dp[3] = max(v[1] + v[3], v[2] + v[3]);
    for (int i=4; i<N+1; i++)
        {
            dp[i] = max(dp[i-2] + v[i], dp[i-3] + v[i-1] + v[i]);
        }
    cout << dp[N];
}