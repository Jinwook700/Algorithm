#include <iostream>
#include <vector>
using namespace std;

int blueCnt = 0;
int whiteCnt = 0;

int check(vector<vector<int>> v)
{
    bool blue = false;
    bool white = false;
    for (int i=0; i<v.size(); i++)
        for (int j=0; j<v[0].size(); j++)
            {
                if (v[i][j] == 1) blue = true;
                if (v[i][j] == 0) white = true;
            }
    if (blue && white) return 2;
    if (blue && !white) return 1;
    else return 0;
}

void cut (vector<vector<int>> v)
{
    int checkCnt = check(v);
    
    if (checkCnt == 1)
    {
        blueCnt++;
        return;
    }
    if (checkCnt == 0)
    {
        whiteCnt++;
        return;
    }

    int a = v.size()/2;
    vector<vector<int>> v1(a, vector<int>(a, 0));
    vector<vector<int>> v2(a, vector<int>(a, 0));
    vector<vector<int>> v3(a, vector<int>(a, 0));
    vector<vector<int>> v4(a, vector<int>(a, 0));
    for (int i=0; i<a*2; i++)
        {
            for (int j=0; j<a*2; j++)
                {
                    if (i < a && j < a) v1[i][j] = v[i][j];
                    else if (i < a && j >= a) v2[i][j-a] = v[i][j];
                    else if (i >= a && j < a) v3[i-a][j] = v[i][j];
                    else v4[i-a][j-a] = v[i][j];
                }
        }
    cut(v1); cut(v2); cut(v3); cut(v4);
}

int main()
{
    int N; cin >> N;
    vector<vector<int>> v(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++) cin >> v[i][j];
    cut(v);

    cout << whiteCnt << "\n" << blueCnt;
}