#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<vector<string>> v(N, vector<string>(4));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<4; j++)
                {
                    cin >> v[i][j];
                }
        }
    sort(v.begin(), v.end(), [](const vector<string>&a, const vector<string>&b){
        if (stoi(a[1]) == stoi(b[1]))
        {
            if (stoi(a[2]) == stoi(b[2]))
            {
                if (stoi(a[3]) == stoi(b[3]))
                {
                    return a[0] < b[0];
                }
                return stoi(a[3]) > stoi(b[3]);
            }
            return stoi(a[2]) < stoi(b[2]);
        }
        return stoi(a[1]) > stoi(b[1]);
    });

    for (int i=0; i<N; i++) cout << v[i][0] << "\n";
}