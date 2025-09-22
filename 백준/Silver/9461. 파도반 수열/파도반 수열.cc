#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(101, 0);

long long screw (int n)
{
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for (int i=6; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-5];
        }
    return dp[n];
}

int main()
{
    int T; cin >> T;
    while(T--)
        {
            int N; cin >> N;
            cout << screw(N) << "\n";
        }
    
}