#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M, '.'));

    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    cin >> v[i][j];
                }
        }

    for (int i=M-1; i>=0; i--)
        {
            for (int j=0; j<N; j++)
                {
                    char ch = v[j][i];
                    if (ch == '.') cout << '.';
                    else if (ch == 'O') cout << 'O';
                    else if (ch == '-') cout << '|';
                    else if (ch == '|') cout << '-';
                    else if (ch == '/') cout << '\\';
                    else if (ch == '\\') cout << '/';
                    else if (ch == '^') cout << '<';
                    else if (ch == '<') cout << 'v';
                    else if (ch == 'v') cout << '>';
                    else if (ch == '>') cout << '^';
                }
            cout << "\n";
        }
    
}