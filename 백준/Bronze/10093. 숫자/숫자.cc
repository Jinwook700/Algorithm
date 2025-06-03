#include <iostream>
using namespace std;

int main()
{
    long long A, B; cin >> A >> B;
    if (B > A) 
    {
        long long temp = B;
        B = A;
        A = temp;
    }
    if (A == B) cout << 0;
    else cout << A -  B - 1 << "\n";
    for (int i=0; i< A - B - 1; i++)
        {
            cout << B + 1 + i << " ";
        }
}