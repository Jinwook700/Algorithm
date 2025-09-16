#include <iostream>
using namespace std;

int main() {
    int d, m, y, n; cin >> d >> m >> y >> n;
    int a, b, c; cin >> a >> b >> c;

    int count = 0;
    while(true)
        {
            d++;
            if (d == 31)
            {
                d = 1;
                m++;
            }
            if (m == 13)
            {
                m = 1;
                y++;
            }

            count++;
            if (d == a && m == b && y == c) break;
        }
    if ((n + count)%7 == 0) cout << 7;
    else cout << (n + count)%7;
}