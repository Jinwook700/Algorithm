#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> v;

int check(int x, int y, int size)
{
    int first = v[x][y];
    for (int i=x; i<x + size; i++)
        for (int j=y; j<y + size; j++)
            {
                if (v[i][j] != first) 
                {
                    cout << '(';
                    return 2;
                }
            }
    if (first == 1) return 1;
    return 0;
}

void solve(int x, int y, int size)
{
    int checkNum = check(x, y, size);
    if (checkNum == 1)
    {
        cout << 1;
        return;
    }
    else if (checkNum == 0)
    {
        cout << 0;
        return;
    }
    
    solve(x, y, size/2);
    solve(x, y + size/2, size/2);
    solve(x + size/2, y, size/2);
    solve(x + size/2, y + size/2, size/2);
    cout << ')';
}

int main()
{
    cin >> N;
    v.assign(N, vector<int>());
    for (int i=0; i<N; i++)
        {
            string str; cin >> str;
            for (char c : str) v[i].push_back(c - '0');
        }

    solve(0, 0, N);
}