#include <iostream>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    int index = 0;
    while(true)
        {
            if ((B%2 != 0 && B%10 != 1 && B != A) || B < A) 
            {
                index = -2;
                break;
            }
            else if (B%2 == 0) B /= 2;
            else if (B%10 == 1) B /= 10;
            index++;
            if (B == A) break;
        }
    index++;
    cout << index;
}