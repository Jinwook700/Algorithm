#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];
    cout << "YES" << "\n";
    if (v[0] == 0) cout << 0;
    else cout << v[0]* 100 + v[0]*10 + v[0]; 
}