#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<pair<long long, long long>> v(N);
    for (int i=0; i<N -1; i++)
        {
            long long distance; cin >> distance;
            v[i].second = distance;
        }
    for (int i=0; i<N; i++)
        {
            long long price; cin >> price;
            v[i].first = price;
        }

    long long total = 0;
    long long dis = v[0].second;
    long long beforePrice = v[0].first;
    for (int i=1; i<N; i++)
        {
            if (v[i].first <= beforePrice)
            {
                total += dis * beforePrice;
                beforePrice = v[i].first;
                dis = 0;
            }
            dis += v[i].second;
        }
    total += dis * beforePrice;
    cout << total;
}