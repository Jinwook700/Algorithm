#include <iostream>
using namespace std;

int arr[21][21][21];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);

    int& value = arr[a][b][c];
    if (value != 0) return value;
    
    if (a < b && b < c) value = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    else value = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    return value;
}

int main()
{
    int a,b,c;
    while(cin >> a >> b >> c)
        {
            if (a == -1 && b == -1 && c == -1) break;
            int result = w(a, b, c);
            cout << "w(" << a << ", " << b << ", " << c << ") = " << result << "\n";
        }
}