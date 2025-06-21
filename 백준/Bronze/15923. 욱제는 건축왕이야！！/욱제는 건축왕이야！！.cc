#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    N--;
    int sum = 0;
    int x, y; cin >> x >> y;
    int firstX = x, firstY = y;
    while(N--)
        {
            int beforeX = x, beforeY = y; 
            cin >> x >> y;
            if (x != beforeX) sum += abs(x - beforeX);
            if (y != beforeY) sum += abs(y - beforeY);
        }
    if (x != firstX) sum += abs(x - firstX);
    if (y != firstY) sum += abs(y - firstY);
    cout << sum;
}