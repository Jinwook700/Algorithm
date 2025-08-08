#include <iostream>
using namespace std;

int main() {
    string A, B; cin >> A >> B;
    int length = A.length();
    for (int i=0; i<length; i++)
        {
            if (A[i] == '1' && B[i] == '1') cout << 1;
            else cout << 0;
        }
    cout << "\n";
    for (int i=0; i<length; i++)
        {
            if (A[i] == '1' || B[i] == '1') cout << 1;
            else cout << 0;
        }
    cout << "\n";
    for (int i=0; i<length; i++)
        {
            if (A[i] == B[i]) cout << 0;
            else cout << 1;
        }
    cout << "\n";
    for (int i=0; i<length; i++)
        {
            if (A[i] == '1') cout << 0;
            else cout << 1;
        }
    cout << "\n";
    for (int i=0; i<length; i++)
        {
            if (B[i] == '1') cout << 0;
            else cout << 1;
        }
}