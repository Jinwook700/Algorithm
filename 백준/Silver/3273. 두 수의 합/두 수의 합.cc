#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    int x; cin >> x;

    sort(v.begin(), v.end());

    int first = 0;
    int second = n - 1;
    int count = 0;
    int sum = 0;

    while(first != second)
        {
            sum = v[first] + v[second];
            if (sum > x) second--;
            else if (sum < x) first++;
            else
            {
                count++;
                second--;
            }
        }
    cout << count;
}