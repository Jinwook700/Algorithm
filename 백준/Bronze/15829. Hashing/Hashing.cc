#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int L; cin >> L;
    int sum = 0;
    for (int i=0; i<L; i++)
        {
            char ch; cin >> ch;
            sum += (ch - 'a' + 1) * pow(31, i);
        }
    cout << sum % 1234567891;
}