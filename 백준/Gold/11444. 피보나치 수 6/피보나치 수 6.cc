#include <iostream>
#include <map>
using namespace std;

#define MOD 1000000007

map<long long, long long> m;

long long fibo (long long n)
{
    if (m[n]) return m[n];
    
    long long result = 0;
    if (n % 2 == 0) result = (fibo(n/2) % MOD) * ((fibo(n/2 + 1) % MOD) + fibo(n/2 - 1)) % MOD;
    else result = fibo((n + 1) / 2) * fibo((n + 1) / 2) % MOD
        + fibo((n - 1) / 2) * fibo((n - 1) / 2) % MOD;

    return m[n] = result % MOD;
}

int main() {
    long long n; cin >> n;
    m[0] = 0;
    m[1] = 1;
    m[2] = 1;
    cout << fibo(n);
}