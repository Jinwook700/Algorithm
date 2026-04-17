#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int K, N; 
vector<int> v;

bool isPossible(long long height)
{
    long long count = 0;
    for (int x : v)
        {
            count += x / height;
        }
    if (count >= N) return true;
    return false;
}

int main() {
    cin >> K >> N;
    v.assign(K, 0);
    for (int i = 0; i < K; i++) cin >> v[i];
    sort(v.begin(), v.end());

    long long low = 1; //가능한 길이 최솟값
    long long high = v.back(); //가능한 길이 최댓값
    long long answer = 0;

    while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            if (isPossible(mid))
            {
                answer = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
    cout << answer;
}