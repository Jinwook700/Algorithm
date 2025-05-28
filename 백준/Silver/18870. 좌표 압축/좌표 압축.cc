#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> v;
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            v.push_back({num, i});
        }

    stable_sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a.first < b.first;
    });

    int index = 0;
    for (int j=0; j<N-1; j++)
        {
            int temp = v[j].first;
            v[j].first = index;
            if (temp != v[j+1].first) index++;
        }
    v[N-1].first = index;

    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    for (int k=0; k<N; k++) cout << v[k].first << " ";
}