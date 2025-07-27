#include <iostream>
using namespace std;

int main() {
    int M, H; cin >> M >> H;
    int N; cin >> N;
    int C, B;
    int result = 0;
    
    while(N--)
        {
            cin >> C >> B;
            if (C*M >= B*H) result += C*M;
            else result += B*H;
        }

    cout << result;
}