#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<char>> v(N, vector<char>(N));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    cin >> v[i][j];
                }
        }
    vector<vector<char>> origin(v);

    int count = 0;
    for (int k=0; k<N; k++)
        {
            for (int l=0; l<N; l++)
                {
                    if (l < N - 1)
                    {
                        swap(v[k][l], v[k][l+1]);
                        for (int i=0; i<N; i++)
                            {
                                char before = v[i][0];
                                int value = 0;
                                for (int j=0; j<N; j++)
                                    {
                                        if (v[i][j] == before) value++;
                                        else value = 1;
                                        if (value > count) count = value;
                                        before = v[i][j];
                                    }
                            }

                        for (int m=0; m<N; m++)
                            {
                                char before = v[0][m];
                                int value = 0;
                                for (int n=0; n<N; n++)
                                    {
                                        if (v[n][m] == before) value++;
                                        else value = 1;
                                        if (value > count) count = value;
                                        before = v[n][m];
                                    }
                            }
                    }
                    v = origin;
                    
                    if (k < N - 1)
                    {
                        swap(v[k][l], v[k+1][l]);
                        for (int i=0; i<N; i++)
                            {
                                char before = v[i][0];
                                int value = 0;
                                for (int j=0; j<N; j++)
                                    {
                                        if (v[i][j] == before) value++;
                                        else value = 1;
                                        if (value > count) count = value;
                                        before = v[i][j];
                                    }
                            }

                        for (int m=0; m<N; m++)
                            {
                                char before = v[0][m];
                                int value = 0;
                                for (int n=0; n<N; n++)
                                    {
                                        if (v[n][m] == before) value++;
                                        else value = 1;
                                        if (value > count) count = value;
                                        before = v[n][m];
                                    }
                            }
                        
                    }
                    v = origin;
                }
        }
    cout << count;
}