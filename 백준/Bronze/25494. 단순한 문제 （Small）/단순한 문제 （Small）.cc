#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--)
        {
            int a,b,c; cin >> a >> b >> c;
            int sum = 0;
            int x,y,z;
            for (x=1; x<=a; x++)
                {
                    for (y=1; y<=b; y++)
                        {
                            for (z=1; z<=c; z++)
                                {
                                    if (x%y == y%z && y%z == z%x) sum++;
                                }
                        }
                }
            cout << sum << "\n";
        }
}