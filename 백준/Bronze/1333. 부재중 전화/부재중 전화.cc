#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L, D; cin >> N >> L >> D;
    vector<int> v(10000, 0);
    int index = 0;
    int listen = L;
    int relax = 5;
    while(true)
        {
            if (listen == 0)
            {
                relax--;
                if (relax == 0)
                {
                    N--;
                    listen = L;
                    relax = 5;
                    if (N == 0) break;
                }
            }
            else 
            {
                v[index] = 1;
                listen--;
            }
            index++;
        }
    for (int i=0; i<10000; i++)
        {
            if (v[i] == 0 && i%D == 0)
            {
                cout << i;
                break;
            }
        }
}