#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    vector<int> v(N);
    long long sum = 0;
    long long maximum = 0;
    for (int i=0; i<N; i++) 
        {
            cin >> v[i];
            if (i < K) sum += v[i];
        }

    maximum = sum;
    for (int i=1; i<=N - K; i++)
        {
            sum = sum - v[i-1] + v[i + K - 1];
            if (sum > maximum) maximum = sum;
        }
    cout << maximum;
}