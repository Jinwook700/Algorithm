#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, K; cin >> N >> M >> K;
    vector<int> v1(N, 0);
    vector<int> v2(N, 0);
    int cnt = 0;
    
    for (int i=0; i<M; i++) v1[i] = 1;
    for (int i=0; i<K; i++) v2[i] = 1;
    for (int i=0; i<N; i++)
        if (v1[i] == v2[i]) cnt++;

    cout << cnt;
}