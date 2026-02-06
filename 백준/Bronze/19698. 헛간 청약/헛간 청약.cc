#include <iostream>
using namespace std;

int main() {
    int N, W, H, L; cin >> N >> W >> H >> L;
    cout << min((W/L) * (H/L), N);

    return 0;
}