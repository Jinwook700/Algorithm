#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--)
        {
            int N; cin >> N;
            int count = 0;
            for (long long i = 5; i <= N; i *= 5)
                {
                    count += N/i;
                }
            cout << count << "\n";
        }
}