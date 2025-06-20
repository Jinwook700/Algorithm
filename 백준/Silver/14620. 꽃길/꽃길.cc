#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void plus1(vector<vector<pair<int,int>>>& v, int x, int y, int value)
{
    v[x][y].second = value;
    v[x+1][y].second = value;
    v[x-1][y].second = value;
    v[x][y+1].second = value;
    v[x][y-1].second = value;
}

int flowerSum (vector<vector<pair<int, int>>>& v, int x, int y)
{
    return v[x][y].first + v[x-1][y].first
                    + v[x+1][y].first + v[x][y-1].first + v[x][y+1].first;
}

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
                    int flower1 = flowerSum(v, q, w);
                    plus1(v, q, w, 1);

                    for (int e=1; e<N-1; e++)
                        {
                            for (int r=1; r<N-1; r++)
                                {
                                    if (v[e][r].second != 1 && v[e+1][r].second != 1 && v[e-1][r].second != 1 &&
                                        v[e][r+1].second != 1 && v[e][r-1].second != 1)
                                    {
                                        int flower2 = flowerSum(v, e, r);
                                        plus1(v, e, r, 1);
                                        
                                        for (int t=1; t<N-1; t++)
                                            {
                                                for (int y=1; y<N-1; y++)
                                                    {
                                                        if (v[t][y].second != 1 && v[t+1][y].second != 1 && v[t-1][y].second != 1 &&
                                                            v[t][y+1].second != 1 && v[t][y-1].second != 1)
                                                        {
                                                            int flower3 = flowerSum(v, t, y);
                                                            sum.push_back(flower1 + flower2 + flower3);
                                                        }
                                                        
                                                    }
                                            }
                                    }
                                    plus1(v, e, r, 0);
                                    plus1(v, q, w, 1);
                                }
                        }
                    plus1(v, q, w, 0);
                }
        }
    sort(sum.begin(), sum.end());
    cout << sum[0];
}