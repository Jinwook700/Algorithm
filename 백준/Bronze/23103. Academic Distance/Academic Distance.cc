#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int first_a; int first_b;
    cin >> first_a >> first_b;
    int result = 0;
    
    for (int i=0; i<N-1; i++) {
        int a,b; cin >> a >> b;
        result += abs(a-first_a) + abs(b-first_b);
        first_a = a; first_b = b;
    }
    
    cout << result;
}