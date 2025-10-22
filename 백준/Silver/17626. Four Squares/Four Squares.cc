#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> dp(50001, 0);
    for (int i=1; i*i <= 50000; i++) dp[i*i] = 1;
    dp[2] = 2;
    dp[3] = 3;
    
    for (int i=5; i<50001; i++)
        {
            if (dp[i] != 0) continue;
            int minValue = 5;
            for (int j=0; j<300; j++)
                {
                    if (int(sqrt(i)) - j == 0) break;
                    int currentValue = dp[i - pow(int(sqrt(i)) - j,2)] + 1;
                    minValue = min(minValue, currentValue);
                }
            dp[i] = minValue;
        }
    cout << dp[n];
}