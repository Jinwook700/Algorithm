#include <iostream>
using namespace std;

int main() {
    int N, C; cin >> N >> C;
    int* arr= new int[N];
    for (int i=0; i<N; i++) cin >> arr[i];
    
    int result = 0;
    
    for (int j=1; j<C+1; j++) {
        for (int k=0; k<N; k++) {
            if (j%arr[k] == 0) {
                result += 1;
                break;
            }
        }
    }
    
    cout << result;
}