#include <iostream>
using namespace std;

#define c 1000000007

long long N, K;

long long power (long long a, long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a%c;

    long long temp = power(a, b/2);
    if (b % 2 == 0) return temp*temp%c;
    return ((temp * temp) % c * (a % c)) % c;
}

long long comb(long long n, long long k)
{
    if (k == 0 || n == k) return 1;
    
    long long A = 1, B = 1;
    for (int i = N - K + 1; i<=N; i++)
        A = (A * i)%c;
    for (int i = 1; i <= K; i++)
        B = (B * i) % c;
    return A*(power(B, c-2))%c;
}

int main() {
    cin >> N >> K;
    cout << comb(N, K);
}