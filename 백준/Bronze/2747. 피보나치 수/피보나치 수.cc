#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(50);
    v[0] = 0;
    v[1] = 1;
    for (int i=2; i<50; i++) v[i] = v[i-2] + v[i-1];
    cout << v[n];
}