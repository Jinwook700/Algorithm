#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v;
    for (int i=0; i<N; i++)
        {
            int price; cin >> price;
            v.push_back(price);
        }
    sort(v.begin(), v.end());

    int sum = 0;
    if (v.size() % 3 == 1)
    {
        sum += v[0];
        v.erase(v.begin());
    }
    else if (v.size() % 3 == 2)
    {
        sum += v[0], sum += v[1];
        v.erase(v.begin(), v.begin() + 2);
    }
    if (N > 2)
    {
        for (int k=0; k<v.size(); k++) sum += v[k];
        for (int j=0; j<v.size(); j += 3) sum -= v[j];
    }
    cout << sum;
}