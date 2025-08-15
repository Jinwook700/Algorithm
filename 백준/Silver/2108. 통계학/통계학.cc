#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v(N);
    vector<pair<int, int>> intV(8001);
    for (int i=0; i<8001; i++) intV[i].first = -4000 + i;
    int sum = 0;
    for (int i=0; i<N; i++) 
    {
        cin >> v[i];
        sum += v[i];
        intV[v[i] + 4000].second++;
    }
    sort(v.begin(), v.end());
    sort(intV.begin(), intV.end(), [](const pair<int, int>&a, const pair<int, int>&b){
        return a.second > b.second;
    });
    vector<int> manyNum;
    for (int i=0; i<8001; i++)
        {
            if (intV[i].second == intV[0].second) manyNum.push_back(intV[i].first);
            else break;
        }
    sort (manyNum.begin(), manyNum.end());
    int size = manyNum.size();

    if (abs(round(sum/(double)N)) == 0) cout << 0 << "\n";
    else cout << round(sum/(double)N) << "\n";
    cout << v[N/2] << "\n";
    if (size == 1) cout << intV[0].first << "\n";
    else cout << manyNum[1] << "\n";
    cout << v[N-1] - v[0];
}