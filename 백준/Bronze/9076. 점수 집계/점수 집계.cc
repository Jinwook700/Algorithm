#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    vector<int> v(5, 0);
    
    while (T--)
        {
            for (int i = 0; i < 5; i++) cin >> v[i];
            sort(v.begin(), v.end());
            if (v[3] - v[1] >= 4)
            {
                cout << "KIN" << "\n";
                continue;
            }

            cout << v[1] + v[2] + v[3] << "\n";
        }
}