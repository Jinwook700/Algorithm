#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int M, K; cin >> M >> K;
    cout << (M % K == 0 ? "Yes" : "No");
}