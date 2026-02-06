#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long N; cin >> N;
    long long result = 0;
    while (N--)
        {
            long long num; cin >> num;
            result += num;
        }
    cout << result;
    return 0;
}