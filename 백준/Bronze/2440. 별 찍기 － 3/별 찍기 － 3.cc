#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int k = 0;
    string str = "*";
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N-k; j++) cout << "*";
            cout << "\n";
            k++;
        }
}