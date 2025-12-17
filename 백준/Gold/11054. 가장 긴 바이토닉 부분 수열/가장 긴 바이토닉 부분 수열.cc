#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

void func(vector<int>& v, vector<int>& dp)
{
    for (int i=2; i<N+1; i++)
        for (int j=0; j<i; j++)
            if (v[j] < v[i]) dp[i] = max(dp[i], dp[j] + 1);
}

int main()
{
    cin >> N;
    vector<int> v(N + 1);
    vector<int> dpInc(N + 1);
    vector<int> dpDec(N + 1);
    v[0] = 0;
    dpInc[0] = 0; dpInc[1] = 1;
    dpDec[0] = 0; dpDec[1] = 1;
    for (int i=0; i<N; i++) cin >> v[i+1];
    vector<int> vRev(v);
    reverse(vRev.begin(), vRev.end());
    vRev.resize(N);
    vRev.insert(vRev.begin(), 0);

    func(v, dpInc);
    func(vRev, dpDec);

    reverse(dpDec.begin(), dpDec.end());

    int result = 0;
    for (int i=1; i<N+1; i++)
        result = max(result, dpInc[i] + dpDec[i-1]);

    //for (int i=0; i<N+1; i++) cout << dpInc[i] << " ";
    //cout << "\n";
    //for (int i=0; i<N+1; i++) cout << dpDec[i] << " ";

    cout << result - 1;
}