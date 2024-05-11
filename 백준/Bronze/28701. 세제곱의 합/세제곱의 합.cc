#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a = 0;int c = 0;
    for (int i=0;i<N; i++) {
        a += i+1;
        c += (i+1)*(i+1)*(i+1);
    }
    cout << a << "\n" << a*a << "\n" << c;
}