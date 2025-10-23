#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(const vector<int> &v, int m, vector<int>& currentV)
{
   if (currentV.size() == m)
   {
       int first = currentV[0];
       for (int i=1; i<m; i++)
           {
               if (currentV[i] < first) return;
               first = currentV[i];
           }
       for (int x : currentV) cout << x << " ";
       cout << "\n";
       return;
   }

    for (int i = 0; i < v.size(); i++)
        {
            currentV.push_back(v[i]);

            permutation(v, m, currentV);

            currentV.pop_back();
        }
}

int main() {
    ios::sync_with_stdio;
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    vector<int> v(n, 0);
    for (int i=0; i<n; i++) v[i] = i+1;
    vector<int> currentV;
    permutation(v, m, currentV);
}