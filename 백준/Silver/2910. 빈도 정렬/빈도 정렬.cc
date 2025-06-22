#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int N, C; cin >> N >> C;
    unordered_map<int, int> order;
    unordered_map<int, int> frecuency;
    for (int i=0; i<N; i++)
    {
        int num; cin >> num;
        if (order.find(num) == order.end()) order[num] = i;
        frecuency[num]++;
    }
    vector<pair<int, int>> vFre(frecuency.begin(), frecuency.end());
    sort(vFre.begin(), vFre.end(), [&](const pair<int, int>&a, pair<int, int>&b){
        if (a.second == b.second) return order[a.first] < order[b.first];
        return a.second > b.second;
    });

    int size = vFre.size();
    for (int i=0; i<size; i++)
    {
        int freq = vFre[i].second;
        for (int j=0; j<freq; j++)
            {
                cout << vFre[i].first << " ";
            }
    }
    
}