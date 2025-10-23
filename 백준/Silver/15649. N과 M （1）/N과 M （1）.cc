#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(const vector<int> &v, int m, vector<int>& currentV, vector<bool>& isUsed)
{
   if (currentV.size() == m)
   {
       for (int x : currentV) cout << x << " ";
       cout << "\n";
       return;
   }

    for (int i = 0; i < v.size(); i++)
        {
            if (isUsed[i]) continue;
            isUsed[i] = true;
            currentV.push_back(v[i]);

            permutation(v, m, currentV, isUsed);

            currentV.pop_back();
            isUsed[i] = false;
        }
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n, 0);
    for (int i=0; i<n; i++) v[i] = i+1;
    vector<int> currentV;
    vector<bool> isUsed(v.size(), false);
    permutation(v, m, currentV, isUsed);
}