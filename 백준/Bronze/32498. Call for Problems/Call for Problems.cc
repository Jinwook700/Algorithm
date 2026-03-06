#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int result = N;
    for (int i = 0; i < N; i++)
        {
            int num; cin >> num;
            if (num % 2 == 0) result--;
        }

    cout << result;
}