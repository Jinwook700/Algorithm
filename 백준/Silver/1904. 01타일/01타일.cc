#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int tile(int N)
{
    dp[1] = 1;
    dp[2] = 2;
    for (int i=3; i<=N; i++)
        {
            dp[i] = (dp[i-1] + dp[i-2])%15746;
        }
    return dp[N];
}

int main()
{
    int N; cin >> N;
    dp.resize(N + 1);
    cout << tile(N);
}