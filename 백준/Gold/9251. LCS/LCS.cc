#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2; cin >> str1 >> str2;
    int a = str1.size();
    int b = str2.size();
    vector<vector<int>> dp(b + 1,vector<int>(a + 1, 0));

    for (int i=1; i< b+1; i++)
        {
            for (int j=1; j < a+1; j++)
                {
                    if (str1[j-1] == str2[i-1])
                    {
                        dp[i][j] = dp[i-1][j-1] + 1;
                    }
                    else
                    {
                        dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                    }
                }
        }
    cout << dp[b][a];
}
