#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    int result = 0;
    while (T--)
        {
            int a, b; cin >> a >> b;
            if (a > 0 && b < 0) result += b - a + 1;
            else if (a < 0 && b > 0) result += b - a - 1;
            else result += b - a;
        }
    if (result == 0) cout << 1;
    else if (result > 0) cout << 1 + result;
    else if (result < 0) cout << result;
}