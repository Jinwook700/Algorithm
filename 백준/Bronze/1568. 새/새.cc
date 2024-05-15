#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int k = 1;
    long count = 0;
    while(true) {
        count ++;
        if (N - k == 0) break;
        else if (N - k < 0) {
            k = 1;
            count --;
        }
        else {
            N -= k;
            k++;
        }
    }
    cout << count;
}