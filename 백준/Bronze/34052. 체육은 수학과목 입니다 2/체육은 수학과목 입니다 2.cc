#include <iostream>
using namespace std;

int main() {
    int T = 4;
    int total = 0;
    
    while(T--)
        {
            int num; cin >> num;
            total += num;
        }

    cout << (total <= 1500 ? "Yes" : "No");

    return 0;
}