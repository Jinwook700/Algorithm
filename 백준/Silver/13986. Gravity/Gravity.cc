#include <iostream>
#include <vector>
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
    for (int i=0; i<M; i++)
        {
            for (int j=0; j<N; j++)
                {
                    if (v[j][i] == 'o')
                    {
                        int before = j;
                        for (int k=j; k<N; k++)
                            {
                                if (v[k][i] == 'o') continue;
                                else if (v[k][i] == '.') before = k;
                                else break;
                            }
                        swap(v[j][i], v[before][i]);
                    }
                }
        }
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    cout << v[i][j];
                }
            cout << "\n";
        }
}