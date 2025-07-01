#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    unordered_map<int, int> um;
    int sum = 0;
    for (int i=0; i<10; i++)
        {
            int num; cin >> num;
            um[num]++;
            sum += num;
        }
    vector<pair<int, int>> v(um.begin(), um.end());
    sort(v.begin(), v.end(), [](const pair<int, int>&a, pair<int, int>&b){
        return a.second > b.second;
    });
    cout << sum/10 << "\n" << v[0].first;
}