#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, S; cin >> N >> S;
    vector<int> v(N, 0);
    vector<long long> dp(N, 0);
    for (int i=0; i<N; i++)
        {
            cin >> v[i];
            dp[i] = v[i];
            if (i>0) dp[i] = dp[i-1] + v[i];
        }

    int a = 0;
    int b = 0;
    int minValue = 100001;
    long long value = 0;

    if (dp[N-1] < S) 
    {
        cout << 0;
        return 0;
    }
    while(true)
        {
            if (a == 0) value = dp[b];
            else value = dp[b] - dp[a-1];
            if (value >= S)
            {
                if (b - a + 1 <= minValue) minValue = b - a + 1;
                a++;
            }
            else b++;
            if (b == N) break;
        }
    cout << minValue;
}