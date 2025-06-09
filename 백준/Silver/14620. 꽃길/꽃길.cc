#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<vector<pair<int, int>>> v(N, vector<pair<int, int>>(N));
    vector<int> sum;
    
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    cin >> v[i][j].first;
                    v[i][j].second = 0;
                }
        }

    for (int q=1; q<N-1; q++)
        {
            for (int w=1; w<N-1; w++)
                {
                    int flower1 = v[q][w].first + v[q-1][w].first
                    + v[q+1][w].first + v[q][w-1].first + v[q][w+1].first;
                    v[q][w].second = 1;
                    v[q+1][w].second = 1;
                    v[q-1][w].second = 1;
                    v[q][w+1].second = 1;
                    v[q][w-1].second = 1;
                    for (int e=1; e<N-1; e++)
                        {
                            for (int r=1; r<N-1; r++)
                                {
                                    if (v[e][r].second != 1 && v[e+1][r].second != 1 && v[e-1][r].second != 1 &&
                                        v[e][r+1].second != 1 && v[e][r-1].second != 1)
                                    {
                                        int flower2 = v[e][r].first + v[e-1][r].first
                                        + v[e+1][r].first + v[e][r-1].first + v[e][r+1].first;
                                        v[e][r].second = 1;
                                        v[e+1][r].second = 1;
                                        v[e-1][r].second = 1;
                                        v[e][r+1].second = 1;
                                        v[e][r-1].second = 1;
                                        for (int t=1; t<N-1; t++)
                                            {
                                                for (int y=1; y<N-1; y++)
                                                    {
                                                        if (v[t][y].second != 1 && v[t+1][y].second != 1 && v[t-1][y].second != 1 &&
                                                            v[t][y+1].second != 1 && v[t][y-1].second != 1)
                                                        {
                                                            int flower3 = v[t][y].first + v[t+1][y].first + v[t-1][y].first +
                                                            v[t][y+1].first + v[t][y-1].first;

                                                            sum.push_back(flower1 + flower2 + flower3);
                                                        }
                                                        
                                                    }
                                            }
                                    }

                                    v[e][r].second = 0;
                                    v[e+1][r].second = 0;
                                    v[e-1][r].second = 0;
                                    v[e][r+1].second = 0;
                                    v[e][r-1].second = 0;

                                    v[q+1][w].second = 1;
                                    v[q-1][w].second = 1;
                                    v[q][w+1].second = 1;
                                    v[q][w-1].second = 1;
                                }
                        }
                    v[q][w].second = 0;
                    v[q+1][w].second = 0;
                    v[q-1][w].second = 0;
                    v[q][w+1].second = 0;
                    v[q][w-1].second = 0;
                }
        }
    sort(sum.begin(), sum.end());
    cout << sum[0];
}