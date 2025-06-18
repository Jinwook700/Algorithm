#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int day = 0;
    int hour = 0;
    while (N--)
        {
            int num; cin >> num;
            hour += num;
            hour += 8;
        }
    hour -= 8;
    cout << hour / 24 << " " << hour % 24;
}