#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<int> gold(n);
    long long total = 0;
    for (int i=0; i<n; i++) 
        {
            cin >> gold[i];
            if (i < m) total += gold[i];
        }

    long long result = total;
    for (int i=0; i<n-m; i++)
        {
            total = total - gold[i] + gold[m+i];
            result = max(result, total);
        }
    
    cout << result;
}