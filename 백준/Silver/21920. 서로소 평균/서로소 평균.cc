#include <iostream>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] = {0};
    for (int i=0; i<N; i++)
        {
            int Ai; cin >> Ai;
            arr[i] = Ai;
        }
    int X; cin >> X;
    long long sum = 0;
    double count = 0;
    for (int j=0; j<N; j++)
        {
            if (std::gcd(X, arr[j]) == 1)
            {
                sum += arr[j];
                count++;
            }
        }
    cout << fixed << setprecision(10) << sum / count;
    
}