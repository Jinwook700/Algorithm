#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--)
        {
            int k, n; cin >> k >> n;
            vector<vector<int>> v(k+1, vector<int>(n));
            for (int i=0; i<=k; i++)
                {
                    for (int j=0; j<n; j++)
                        {
                            if (i == 0) v[i][j] = j + 1;
                            else
                            {
                                for (int l=0; l<=j; l++)
                                    {
                                        v[i][j] += v[i-1][l];
                                    }
                            }
                        }
                }
            cout << v[k][n-1] << "\n";
        }
}