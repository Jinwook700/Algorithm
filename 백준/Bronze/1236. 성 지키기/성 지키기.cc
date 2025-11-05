#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<vector<char>> v)
{
    for (int i=0; i<v.size(); i++)
        {
            for (int j=0; j<v[0].size(); j++)
                {
                    cout << v[i][j] << " ";
                }
            cout << "\n";
        }
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++) cin >> v[i][j];
        }
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    if (v[i][j] == 'X')
                    {
                        for (int l=0; l<N; l++) 
                            {
                                if (v[l][j] == '.') v[l][j] = 'A';
                                else if (v[l][j] == 'B') v[l][j] = 'C';
                            }
                        for (int m=0; m<M; m++) 
                            {
                                if (v[i][m] == '.') v[i][m] = 'B';
                                else if (v[i][m] == 'A') v[i][m] = 'C';
                            }
                    }
                }
        }

    //printVec(v);
    int ACount = 0, ACount2 = 0;
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    if (v[i][j] == 'A') ACount++;
                }
            if (ACount != 0 && ACount2 == 0) ACount2 = ACount;
        }
    if(ACount2 != 0) ACount = ACount/ACount2;
    int BCount = 0, BCount2 = 0;
    for (int i=0; i<M; i++)
        {
            for (int j=0; j<N; j++)
                {
                    if (v[j][i] == 'B') BCount++;
                }
            if (BCount != 0 && BCount2 == 0) BCount2 = BCount;
        }
    if(BCount2 != 0) BCount = BCount/BCount2;
    int zCount = 0, zCount2 = 0;
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    if (v[i][j] == '.') zCount++;
                }
            if (zCount != 0 && zCount2 == 0) zCount2 = zCount;
        }
    if(zCount2 != 0) zCount = max(zCount2, zCount/zCount2);
    int result = max(ACount, BCount);
    cout << max(zCount, result);
}