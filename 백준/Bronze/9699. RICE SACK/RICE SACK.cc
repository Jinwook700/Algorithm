#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i=0; i<n; i++)
    {
        int heavy = 0;
        for (int j=0; j<5; j++) 
        {
            int m; cin >> m;
            if (m > heavy) heavy = m;
        }
        cout << "Case #" << i+1 << ": " << heavy << "\n";
    }
}