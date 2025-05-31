#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> v;
    for (int i=0; i<N; i++)
        {
            int height, weight; cin >> height >> weight;
            v.push_back({height, weight});
        }
    for (int j=0; j<N; j++)
        {
            int rank = 1;
            int first = v[j].first;
            int second = v[j].second;
            for (int k=0; k<N; k++)
                {
                    if (first < v[k].first && second < v[k].second) rank++;
                }
            cout << rank << " ";
        }
}