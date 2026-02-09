#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v(N, 0);
    for (int i = 0; i < N; i++) cin >> v[i];
    int T; cin >> T;
    while (T--)
        {
            int Q; cin >> Q;
            if (Q == 1)
            {
                int l, r, k; cin >> l >> r >> k;
                int cnt = 0;
                for (int i = l - 1; i < r; i++)
                    {
                        if (v[i] == k) cnt++;
                    }
                cout << cnt << "\n";
            }
            else 
            {
                int l, r; cin >> l >> r;
                for (int i = l - 1; i < r; i++) v[i] = 0;
            }
        }
}