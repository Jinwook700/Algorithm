#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, J, S, H, K;
    cin >> N >> J >> S >> H >> K;

    vector<vector<char>> v(3, vector<char>(N, '.'));
    for (int i=0; i<3; i++)
        {
            for (int j=0; j<N; j++)
                {
                    cin >> v[i][j];
                }
        }

    vector<int> obstakle(N);
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<3; j++)
                {
                    if (j == 0 && v[j][i] == 'v') obstakle[i] = 1;
                    if (j == 1 && v[j][i] == '^') obstakle[i] = 2;
                    else if (j == 2 && v[j][i] == '^' && v[1][i] == '.') obstakle[i] = 3;
                }
        }
    sort(obstakle.begin(), obstakle.end(), greater<int>());

    for (int i=0; i<N; i++)
        {
            if (obstakle[i] == 1)
            {
                if (S > 0) S--;
                else H -= K;
            }
            if (obstakle[i] == 2)
            {
                if (J > 1) J -= 2;
                else H -= K;
            }
            if (obstakle[i] == 3)
            {
                if (J > 0) J -= 1;
                else H -= K;
            }
            if (H <= 0) 
            {
                cout << -1;
                break;
            }
        }
    
    if (H>0) cout << H;
}