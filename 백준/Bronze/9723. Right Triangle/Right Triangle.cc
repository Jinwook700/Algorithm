#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    int _case = 1;
    while (T--)
        {
            vector<int> v(3);
            for (int i=0; i<3; i++) cin >> v[i];
            sort(v.begin(), v.end());
            if (v[2]*v[2] == v[0]*v[0] + v[1]*v[1])
                cout << "Case #" << _case << ": " << "YES" << "\n";
            else cout << "Case #" << _case << ": " << "NO" << "\n";
            _case++;
        }
}