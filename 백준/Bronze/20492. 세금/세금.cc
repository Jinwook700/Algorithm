#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N; cin >> N;
    double A = N*78/100;
    double B = N - N*2/10*22/100;
    cout << setprecision(0) << fixed << A << " " << B;
}