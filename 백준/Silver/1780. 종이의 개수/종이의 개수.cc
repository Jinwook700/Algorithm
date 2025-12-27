#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> v;

int Zerocnt = 0;
int Pluscnt = 0;
int Minuscnt = 0;

int check(int x, int y, int size)
{
    int first = v[x][y];
    for (int i=x; i<x + size; i++)
        for (int j=y; j<y + size; j++)
            {
                if (v[i][j] != first)
                {
                    return 2;
                }
            }
    
    if (first == -1) return -1;
    else if (first == 0) return 0;
    return 1;
}

void solve(int x, int y, int size)
{
    int checkNum = check(x, y, size);
    if (checkNum == -1)
    {
        Minuscnt++;
        return;
    }
    else if (checkNum == 0)
    {
        Zerocnt++;
        return;
    }
    else if (checkNum == 1)
    {
        Pluscnt++;
        return;
    }

    int newSize = size/3;
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) solve(x + i*newSize, y + j*newSize, newSize);
}

int main()
{
    cin >> N;
    v.assign(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++) cin >> v[i][j];

    solve(0, 0, N);

    cout << Minuscnt << "\n" << Zerocnt << "\n" << Pluscnt;
}