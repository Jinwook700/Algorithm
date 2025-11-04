#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<pair<long long, long long>> v;
    for (int i=0; i<10; i++) v.push_back({0, 1});
    v[0].second = 0;
    if (N == 1)
    {
        cout << 9;
        return 0;
    }
    for (int i=2; i<=N; i++)
        {
            for (int j=0; j<10; j++)
                {
                    if (j == 0) v[j].first = v[j+1].second;
                    else if (j == 9) v[j].first = v[j-1].second;
                    else v[j].first = (v[j-1].second + v[j+1].second)%1000000000;
                }
            for (int j=0; j<10; j++) v[j].second = v[j].first;
        }

    long long result = 0;
    for (int i=0; i<10; i++) result = (result + v[i].first)%1000000000;
    cout << result;
}