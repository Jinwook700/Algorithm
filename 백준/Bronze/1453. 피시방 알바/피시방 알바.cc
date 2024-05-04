#include <iostream>
using namespace std;

int main() {
    int arr[100] = {0};
    int N; cin >> N;
    int count = 0;
    for (int i=0; i<N; i++) {
        int num; cin >> num;
        if (arr[num-1] == 0) arr[num-1] = 1;
        else count ++;
    }
    cout << count;
}