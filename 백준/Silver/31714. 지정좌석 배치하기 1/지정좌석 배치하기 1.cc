#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, D; cin >> N >> M >> D;
    vector<vector<int>> v;
    bool flag = true;
    for (int i=0; i<N; i++)
        {
            vector<int> row;
            for (int l=0; l<M; l++)
                {
                    int num; cin >> num;
                    row.push_back(num + D*i);
                }
            sort(row.begin(), row.end());
            v.push_back(row);
        }

    for (int j=0; j<M; j++)
        {
            for (int k=1; k<N; k++)
                {
                    if (v[k][j] <= v[k-1][j])
                    {
                        flag = false;
                        break;
                    }
                }
        }
    if (flag) cout << "YES";
    else cout << "NO";
}