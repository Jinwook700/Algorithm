#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v(2001, vector<int>(2001, 0));
    int N; cin >> N;
    int x = 1000, y = 1000;
    v[x][y] = 1;
    string str; cin >> str;
    for (char c : str)
        {
            if (c == 'S')
            {
                y--;
                v[x][y] = 1;
            }
            else if (c == 'N')
            {
                y++;
                v[x][y] = 1;
            }
            else if (c == 'E')
            {
                x++;
                v[x][y] = 1;
            }
            else
            {
                x--;
                v[x][y] = 1;
            }
        }

    int total = 0;
    for (int i=0; i<2001; i++)
        {
            for (int j=0; j<2001; j++)
                {
                    total += v[i][j];
                }
        }
    cout << total;
}