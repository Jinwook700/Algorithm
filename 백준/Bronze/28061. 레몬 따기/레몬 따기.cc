#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int result = 0;
    for (int i = 0; i < N; i++)
        {
            int num; cin >> num;
            result = max(result, num - (N - i));
        }
    cout << result;
}