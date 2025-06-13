#include <iostream>
using namespace std;

int main() {
    int L; cin >> L;
    long long sum = 0;
    long long pow = 1;
    int M = 1234567891;
    for (int i=0; i<L; i++)
        {
            char ch; cin >> ch;
            int value = ch - 'a' + 1;
            sum = (sum + (value * pow) % M) % M;
            pow = (pow * 31) % M;               
        }
    cout << sum;
}