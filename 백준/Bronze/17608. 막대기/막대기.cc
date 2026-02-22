#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];
    reverse(v.begin(), v.end());

    int maxValue = 0;
    int result = 0;
    for (int i = 0; i < N; i++)
        {
            if (v[i] > maxValue) result++;
            maxValue = max(maxValue, v[i]);
        }

    cout << result;

    return 0;
}