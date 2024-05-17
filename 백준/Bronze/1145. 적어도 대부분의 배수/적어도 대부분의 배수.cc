#include <iostream>
#include <numeric>
using namespace std;

int main() {
    long long arr[5] = {0};
    for (int i=0; i<5; i++) cin >> arr[i];
    
    long long result = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            for (int k=0; k<5; k++) {
                if (i != j && i != k && j != k) {
                    long long num_first = lcm(arr[i], arr[j]);
                    long long num = lcm(num_first, arr[k]);
                    if (num < result) {
                        result = num;
                    }
                }
            }
        }
    }
    
    cout << result;
    
}