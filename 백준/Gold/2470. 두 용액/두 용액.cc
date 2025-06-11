#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int first = 0;
    int second = N - 1;

    int firstIndex = 0;
    int secondIndex = 0;

    int sum = 0;
    int minSum = 2000000000;

    if (v[0] > 0) cout << v[0] << " " << v[1];
    else if (v[N - 1] < 0) cout << v[N - 2] << " " << v[N - 1];
    else 
    {
        while(first < second)
        {
            sum = v[first] + v[second];
            if (abs(sum) < abs(minSum))
            {
                minSum = sum;
                firstIndex = first;
                secondIndex = second;
            }
            if (sum > 0) second--;
            else if (sum < 0) first++;
            else 
            {
                firstIndex = first;
                secondIndex = second;
                break;
            }
        }
        cout << min(v[firstIndex], v[secondIndex]) << " " << max(v[firstIndex], v[secondIndex]);
    }
}