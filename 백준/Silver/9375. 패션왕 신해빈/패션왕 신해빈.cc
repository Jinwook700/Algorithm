#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--)
        {
            int N; cin >> N;
            unordered_map<string, int> un;
            while(N--)
                {
                    string a, b; cin >> a >> b;
                    un[b]++;
                }

            long long ans = 1;
            for (auto const& [key, value] : un)
                {
                    ans *= (value + 1);
                }
            cout << ans - 1 << "\n";
        }
}