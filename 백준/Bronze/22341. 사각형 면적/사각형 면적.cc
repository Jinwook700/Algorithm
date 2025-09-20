#include <iostream>
using namespace std;

int main()
{
    int N, C; cin >> N >> C;
    int row = N;
    int cul = N;
    for (int i=0; i<C; i++)
        {
            int x,y; cin >> x >> y;
            if (x >= row || y >= cul || x == 0 || y == 0) continue;
            int a = x*cul;
            int b = y*row;
            if (a >= b) row = x;
            else cul = y;
        }
    cout << row * cul;
}