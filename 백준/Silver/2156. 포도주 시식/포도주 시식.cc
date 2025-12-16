#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v;
vector<int> dp;

int main()
{
    cin >> N;
    v.assign(N+1, 0);
    dp.assign(N+1, 0);
    for (int i=0; i<N; i++) cin >> v[i+1];
    dp[1] = v[1];
    if (N > 1) dp[2] = v[1] + v[2];
    if (N > 2) dp[3] = max({v[1] + v[2], v[1] + v[3], v[2] + v[3]});
    for (int i=4; i<N+1; i++)
        {
            dp[i] = max({dp[i-1], dp[i-2] + v[i], dp[i-3] + v[i-1] + v[i]});
        }
    cout << dp[N];
}