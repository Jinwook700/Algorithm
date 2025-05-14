#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while(true)
    {
        cin >> n;
        if (n == -1) break;
        int temp = 0;
        int mile = 0;
        for (int i=0; i<n; i++)
        {
            int a, b; cin >> a >> b;
            mile += a*(b - temp);
            temp = b;
        }
        cout << mile << " miles" << "\n";
    }
}