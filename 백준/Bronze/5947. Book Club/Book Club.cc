#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, P; cin >> N >> M >> P;
    vector<vector<int>> v(N, vector<int>(M, 0));
    vector<int> cow(N, 0);
    int result = P;
    int count = 0;

    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    cin >> v[i][j];
                }
        }
    while(P--)
        {
            int a, b; cin >> a >> b;
            a--;
            for (int i=0; i<N; i++)
                {
                    if (v[i][a] == b) cow[i]++;
                    else cow[i] = false;
                }
        }
    for (int i=0; i<N; i++)
        {
            if (cow[i] == result) count++;
        }
    cout << count;
}