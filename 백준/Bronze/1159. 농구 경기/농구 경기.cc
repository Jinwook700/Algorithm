#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    string *arr = new string[N];
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        arr[i] = s;
    }
    sort(arr, arr + N);

    if (N == 1) cout << "PREDAJA";
    else {
        vector<char> v;
        int count = 0;
        for (int j=1; j<N; j++) {
            if (arr[j][0] == arr[j-1][0]) count += 1;
            else {
                if (count >= 4) v.push_back(arr[j-1][0]);
                count = 0;
            }
        }
        if (count >= 4) v.push_back(arr[N-1][0]);
    
        sort(v.begin(), v.end());
    
        if (v.size() != 0) {
            for (int k=0; k<v.size(); k++) cout << v[k];
        }
            else cout << "PREDAJA";
    }
}