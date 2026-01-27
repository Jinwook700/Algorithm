#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;

    int firstIndex = 1;
    int secondIndex = 1;
    int total = 0;
    int cnt = 0;
    while (true)
        {
            if (total + secondIndex <= N)
            {
                total += secondIndex;
                secondIndex++;
            }
            else
            {
                total -= firstIndex;
                firstIndex++;
            }
            if (total == N) cnt++;
            if (secondIndex == N + 1) break;
        }

    cout << cnt;

    return 0;
}