#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int result = 0;
    for (int i = 0; i < N; i++)
        {
            int num; cin >> num;
            if (num%2 == 0) result++;
            else result--;
        }
    cout << (result > 0 ? "Happy" : "Sad");
}