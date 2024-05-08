#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int result = N/5;
    if (N%5 != 0) result += 1;
    cout << result;
}