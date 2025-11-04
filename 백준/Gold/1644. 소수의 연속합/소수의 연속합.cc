#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    bool check = true;
    if (n == 2 || n == 3 || n == 5) return check;
    if (n%2 == 0 || n%3 == 0) return !check;
    for (int i=3; i*i<=n; i += 2)
        {
            if (n%i == 0)
            {
                check = false;
                break;
            }
        }
    return check;
}

int main()
{
    int N; cin >> N;
    vector<int> prime;
    for (int i=2; i<=N; i++) if (isPrime(i)) prime.push_back(i);

    int a = 0, b = 0;
    int cnt = 0;
    int sum = 2;

    int size = prime.size();
    while(true)
        {
            if (size == 0) break;
            if (sum > N)
            {
                sum -= prime[a];  
                a++;
                if (a == size) break;
            }
            else if (sum < N)
            {
                b++;
                if (b == size) break;
                sum += prime[b];
            }
            if (sum == N)
            {
                cnt++;
                if (a == b) break;
                b++;
                if (b == size) break;
                sum += prime[b];
            }
        }
    cout << cnt;
}