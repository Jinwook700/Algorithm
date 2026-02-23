#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    vector<string> v;
    
    while(T--)
        {
            string str; cin >> str;
            if (str.length() == 3) v.push_back(str);
        }

    sort(v.begin(), v.end());

    cout << v[0];
}