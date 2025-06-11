#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int first = 0;
    int second = N - 1;
    int count = 0;
    int sum = 0;

    while (first != second)
        {
            sum = v[first] + v[second];
            if (sum > M) second--;
            else if (sum < M) first++;
            else 
            {
                count++;
                second--;
            }
        }
    cout << count;
}