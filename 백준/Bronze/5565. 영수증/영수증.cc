#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    for (int i=0; i<9; i++)
        {
            int price; cin >> price;
            N -= price;
        }
    cout << N;
}