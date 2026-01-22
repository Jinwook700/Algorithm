#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N; cin >> N;
    double result = 0;
    cout << fixed << setprecision(6);
    
    while(N--)
        {
            double A; cin >> A;
            result = 1 - (1 - result) * (1 - A*0.01);
            cout << result * 100 << "\n";
        }
}