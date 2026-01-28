#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> v1(N, 0); vector<int> v2(M, 0);
    
    for (int i = 0; i < N; i++) cin >> v1[i];
    for (int i = 0; i < M; i++) cin >> v2[i];
    cout << *max_element(v1.begin(), v1.end()) + *max_element(v2.begin(), v2.end());
}