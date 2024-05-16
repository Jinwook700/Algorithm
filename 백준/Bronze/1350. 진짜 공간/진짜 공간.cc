#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int *arr = new int[N];
    for (int i=0; i<N; i++) cin >> arr[i];
    int cluster; cin >> cluster;
    
    int long long result = 0;
    for (int i=0; i<N; i++) {
        if (arr[i] == 0) continue;
        result += arr[i]/cluster;
        if (arr[i]%cluster != 0) result += 1;
    }
    
    long long answer = result*cluster;
    cout << answer;
}