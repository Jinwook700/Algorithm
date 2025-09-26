#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<int> v(N);
    vector<int> dp(N);
    vector<int> remain(N);
    long long result = 0;
    
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            v[i] = num%M;
            dp[i] = v[i];
            if (i > 0) dp[i] = dp[i-1] + v[i];
            remain[i] = dp[i]%M;
            if (remain[i] == 0) result++;
        }

    sort(remain.begin(), remain.end());

    int num = remain[0];
    
    long long count = 0;
    
    for (int i=0; i<N; i++)
        {
            if (remain[i] == num)
            {
                count++;
            }
            if (remain[i] != num || i == N-1)
            {
                result += count*(count-1)/2;
                //cout << "num : " << num <<  ", count : " << count << ", result : " << result << "\n";
                num = remain[i];
                count = 1;
            }
        }

    cout << result;
}