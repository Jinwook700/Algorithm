#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<vector<char>> v(N, vector<char>(N, '.'));
    string str; cin >> str;
    int x = 0;
    int y = 0;
    
    for (char c : str)
        {
            if (c == 'U') 
            {
                if (x - 1 < 0) continue;
                if (v[x][y] == '.') v[x][y] = 1;
                else if (v[x][y] == 2) v[x][y] = 3;
                x--;
                if (v[x][y] == '.') v[x][y] = 1;
                else if (v[x][y] == 2) v[x][y] = 3;
            }
            else if (c == 'D')
            {
                if (x + 1 > N - 1) continue;
                if (v[x][y] == '.') v[x][y] = 1;
                else if (v[x][y] == 2) v[x][y] = 3;
                x++;
                if (v[x][y] == '.') v[x][y] = 1;
                else if (v[x][y] == 2) v[x][y] = 3;
            }
            else if (c == 'L')
            {
                if (y - 1 < 0) continue;
                if (v[x][y] == '.') v[x][y] = 2;
                else if (v[x][y] == 1) v[x][y] = 3;
                y--;
                if (v[x][y] == '.') v[x][y] = 2;
                else if (v[x][y] == 1) v[x][y] = 3;
            }
            else if (c == 'R')
            {
                if (y + 1 > N - 1) continue;
                if (v[x][y] == '.') v[x][y] = 2;
                else if (v[x][y] == 1) v[x][y] = 3;
                y++;
                if (v[x][y] == '.') v[x][y] = 2;
                else if (v[x][y] == 1) v[x][y] = 3;
            }
        }
    for (int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
                {
                    if (v[i][j] == '.') cout << '.';
                    else if (v[i][j] == 1) cout << '|';
                    else if (v[i][j] == 2) cout << '-';
                    else if (v[i][j] == 3) cout << '+';
                }
            cout << "\n";
        }
    
}