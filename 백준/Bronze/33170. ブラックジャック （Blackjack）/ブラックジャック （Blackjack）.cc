#include <iostream>
using namespace std;

int main() {
    int T = 3;
    int result = 0;
    while(T--)
        {
            int num; cin >> num;
            result += num;
        }

    cout << (result <= 21 ? 1 : 0);
}