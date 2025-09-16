#include <iostream>
using namespace std;

int main()
{
    int num; cin >> num;
    int beforeX = 0;
    bool flag = true;
    int count = 0;
    for (int i=0; i<num; i++)
        {
            int x; cin >> x;
            if (x - beforeX == 1 && x != 1)
            {
                cout << -1;
                flag = false;
                break;
            }
            int length = x - beforeX - 2;
            if (i == 0) length++;
            beforeX = x;
            if (x == 1) count += 1;
            else count += length/2 + length%2 + 1;
        }
    if (flag) cout << count;
}