#include <iostream>
using namespace std;

int main() {
    int n, k, T; cin >> n >> k >> T;
    int sum = 0;
    for (int i=0; i<n; i++)
        {
            int d; cin >> d;
            if (T > k) T = T + d - abs(T - k);
            else if (T < k) T = T + d + abs(T - k);
            else T = T + d;
            sum += abs(T - k);
        }
    cout << sum;
}