#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<int> dp;

int main() {
    int N; cin >> N;
    dp.resize(N);
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            v.push_back(num);
        }
    
    int ret = v[0];
    dp[0] = v[0];
    for (int i=1; i<N; i++)
        {
            dp[i] = max(dp[i-1] + v[i], v[i]);
            ret = max(dp[i], ret);
        }
    cout << ret;
}