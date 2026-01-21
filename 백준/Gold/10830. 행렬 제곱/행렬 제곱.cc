#include <iostream>
#include <vector>
using namespace std;

long long N, B;
vector<vector<int>> v;

vector<vector<int>> multi (vector<vector<int>> vec1, vector<vector<int>> vec2)
{
    vector<vector<int>> newV(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    long long sum = 0;
                    for (int k=0; k<N; k++)
                        {
                            sum += (vec1[i][k] * vec2[k][j])%1000;
                        }
                    newV[i][j] = sum%1000 == 0 ? 0 : sum % 1000;
                }
        }
    return newV;
}

vector<vector<int>> solve(vector<vector<int>> vec, long long B)
{
    if (B == 1) return vec;
    
    vector<vector<int>> half = solve(vec, B/2);
    vector<vector<int>> square = multi(half, half);

    return B%2 == 0 ? square : multi(square, vec);
}

int main() {
    cin >> N >> B;
    v.assign(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++) 
            {
                long long num; cin >> num;
                v[i][j] = num%1000;
            }

    vector<vector<int>> resultV = solve(v, B);
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
            {
                cout << resultV[i][j] << " ";
            }
            cout << "\n";
        }

    return 0;
}