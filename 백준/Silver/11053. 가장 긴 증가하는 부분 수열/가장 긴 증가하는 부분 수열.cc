#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v(N+1);
    vector<int> dp(N+1);
    v[0] = 0;
    dp[0] = 0;
    dp[1] = 1;
    for (int i=0; i<N; i++) cin >> v[i+1];

    for (int i=2; i<N+1; i++)
        for (int j=0; j<i; j++)
            if (v[j] < v[i]) dp[i] = max(dp[i], dp[j] + 1);

    sort(dp.begin(), dp.end(), greater<int>());
    cout << dp[0];
}