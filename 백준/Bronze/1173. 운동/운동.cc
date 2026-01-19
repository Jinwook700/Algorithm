#include <iostream>
using namespace std;

int main() {
    int N, m, M, T, R; cin >> N >> m >> M >> T >> R;
    int cur = m;
    int t = 0;
    int x= 0;
    if (m + T > M)
    {
        cout << -1;
        exit(0);
    }
    while(true)
        {
            if (cur + T <= M) 
            {
                cur += T;
                x++;
            }
            else cur -= R;
            
            if (cur < m) cur = m;
            
            t++;
            if (x == N) break;
        }
    cout << t;
}
