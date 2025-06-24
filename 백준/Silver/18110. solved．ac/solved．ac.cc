#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    float n; cin >> n;
    float num, sum;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    num = floor(n*0.15 + 0.5);
    for (int i = num; i < n - num; i++) sum += v[i];
    if (n == 0) cout << 0;
    else cout << floor(sum/(n - num*2) + 0.5);
}