#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int result = 0;
    while(N--)
        {
            int num; cin >> num;
            result += num;
        }

    if (result > 0) cout << "Right";
    else if (result < 0) cout << "Left";
    else cout << "Stay";
}