#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void checkRow(vector<vector<char>>& v, char& cell1, char& cell2, int N, int& count)
{
    swap(cell1, cell2);
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
    swap(cell1, cell2);
}

void checkCul(vector<vector<char>>& v, char& cell1, char& cell2, int N, int& count)
{
    swap(cell1, cell2);
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
    swap(cell1, cell2);
}

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

    int count = 0;
    for (int k=0; k<N; k++)
        {
            for (int l=0; l<N; l++)
                {
                    if (l < N - 1)
                    {
                        checkRow(v, v[k][l], v[k][l+1], N, count);
                        checkCul(v, v[k][l], v[k][l+1], N, count);
                    }
                    if (k < N - 1)
                    {
                        checkRow(v, v[k][l], v[k+1][l], N, count);
                        checkCul(v, v[k][l], v[k+1][l], N, count);
                    }
                }
        }
    cout << count;
}