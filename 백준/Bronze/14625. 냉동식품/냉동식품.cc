#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,n; cin >> a >> b >> c >> d >> n;
    int count = 0;
    if (a/10 == n || a%10 == n || b % 10 == n || b / 10 == n)count++;
    
    while(true)
        {
            if (a == c && b == d) break;
            b++;
            if (b == 60)
            {
                b = 0;
                a++;
            }
            if (a/10 == n || a%10 == n || b % 10 == n || b / 10 == n)count++;
        }
    cout << count;
}