#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long int N; cin >> N;

    int k = 1;
    while(true)
        {
            unsigned long long int x = 1;
            for (int i=0; i<64; i++)
                {
                    x *= 2;
                    if (i + 1 == k) x -= 1;
                }
            if (x == N) 
            {
                cout << k;
                break;
            }
            k++;
        }
}