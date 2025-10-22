#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> dp2(1001, 0);
    dp2[1] = 1;
    dp2[2] = 3;
    dp2[3] = 5;
    for (int i=4; i<1001; i++)
        {
            dp2[i] = (dp2[i-1] + 2*dp2[i-2])%10007;
        }
    cout << dp2[n];
}