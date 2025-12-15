#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 9
using namespace std;

vector<vector<int>> v(MAX, vector<int>(MAX));
vector<int> countV(10, 0);

bool checkCnt()
{
    for (int i=1; i<10; i++)
        {
            if (countV[i] >= 2) return false;
        }
    return true;
}

bool check(int x, int y)
{
    fill(countV.begin(), countV.end(), 0);
    for (int i = 0; i < MAX; i++) countV[v[i][y]]++;
    if (!checkCnt()) return false;

    fill(countV.begin(), countV.end(), 0);
    for (int i = 0; i < MAX; i++) countV[v[x][i]]++;
    if (!checkCnt()) return false;

    fill(countV.begin(), countV.end(), 0);
    x /= 3; y /= 3;
    for (int k = 0; k < 3; k++)
        for (int l = 0; l < 3; l++)
            countV[v[x*3 + k][y*3 + l]]++;
    if (!checkCnt()) return false;
    
    return true;
}

void sudoku(int x, int y)
{
    if (y == MAX) sudoku(x + 1, 0);
    else if (x == MAX) 
    {
        for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j ++)
                {
                    cout << v[i][j] << " ";
                }
            cout << "\n";
        }
        exit(0);
        return;
    }
    else if (v[x][y] == 0)
    {
        for (int i = 1; i <= MAX; i++)
            {
                v[x][y] = i;
                if (check(x, y)) sudoku(x, y + 1);
                v[x][y] = 0;
            }      
    }
    else sudoku(x, y + 1);
}

int main()
{
    for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j++)
                {
                    cin >> v[i][j];
                }
        }

    sudoku(0, 0);
}