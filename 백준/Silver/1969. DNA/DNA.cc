#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    cin >> v[i][j];
                }
        }

    int total = 0;
    for (int i=0; i<M; i++)
        {
            vector<pair<char,int>> v1(4);
            v1[0].first = 'A'; v1[1].first = 'G';
            v1[2].first = 'T'; v1[3].first = 'C';
            for (int j=0; j<N; j++)
                {
                    if (v[j][i] == 'A') v1[0].second++;
                    else if (v[j][i] == 'G') v1[1].second++;
                    else if (v[j][i] == 'T') v1[2].second++;
                    else if (v[j][i] == 'C') v1[3].second++;
                }
            sort(v1.begin(), v1.end(), [](const pair<char, int>&a, const pair<char, int>&b){
                if (a.second == b.second)
                {
                    return a.first < b.first;
                }
                return a.second > b.second;
            });
            cout << v1[0].first;
            total += N - v1[0].second;
        }
    cout << "\n";
    cout << total;
}