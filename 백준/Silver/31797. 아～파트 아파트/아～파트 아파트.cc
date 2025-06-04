#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    int floor = 0;
    if (N < (M*2)) floor = N;
    else if (N%(M*2) == 0) floor = M*2;
    else floor = N%(M*2);

    vector<pair<int, int>> v;
    for (int j=0; j<M*2; j++)
        {
            int num; cin >> num;
            v.push_back({num, j+1});
        }
    vector<pair<int, int>> v1(v);
    sort(v.begin(), v.end(), [](const pair<int, int>&p, const pair<int, int>&q) {
        return p.first < q.first;
    });
    
    int index = v[floor-1].second;
    
    for (int i=0; i<M*2; i++)
        {
            if (v1[i].second == index)
            {
                cout << (i+2)/2;
                break;
            }
        }
}
