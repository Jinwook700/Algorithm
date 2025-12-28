#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    vector<vector<int>> v1(a, vector<int>(b, 0));
    for (int i=0; i<a; i++)
        for (int j=0; j<b; j++) cin >> v1[i][j];
    int c; cin >> b >> c;
    vector<vector<int>> v2(b, vector<int>(c, 0));
    for (int i=0; i<b; i++)
        for (int j=0; j<c; j++) cin >> v2[i][j];

    for (int i=0; i<a; i++)
        {
            for (int j=0; j<c; j++)
                {
                    int value = 0;
                    for (int k=0; k<b; k++)
                        {
                            value += v1[i][k] * v2[k][j];
                        }
                    cout << value << " ";
                }
            cout << "\n";
        }
}