#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string str; cin >> str;
    int K; cin >> K;
    if (str == "annyong")
    {
        if (K % 2 == 1) cout << K;
        else cout << K - 1;
    }
    else
    {
        if (K%2 == 0) cout << K;
        else if (K == N) cout << K - 1;
        else cout << K + 1;
    }
}