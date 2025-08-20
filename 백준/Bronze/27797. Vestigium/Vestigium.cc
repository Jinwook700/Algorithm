#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            int N; cin >> N;
            int a = 0, b = 0, c = 0;
            vector<vector<int>> v(N, vector<int>(N));
            for (int j=0; j<N; j++)
                {
                    set<int> s;
                    for (int k=0; k<N; k++)
                        {
                            int num; cin >> num;
                            v[j][k] = num;
                            if (j == k) a += num;
                            s.insert(num);
                        }
                    if (s.size() != N) b++;
                }

            for (int j=0; j<N; j++)
                {
                    set<int> s;
                    for (int k=0; k<N; k++)
                        {
                            s.insert(v[k][j]);
                        }
                    if (s.size() != N) c++;
                }
            cout << "Case #" << i+1 << ": " << a << " " << b << " " << c << "\n";
        }
}