#include <iostream>
using namespace std;
#define minValue 1000000000

int main() {
    int P, M, C; cin >> P >> M >> C;
    int X; cin >> X;
    int result = minValue;
    for (int p = 1; p <= P; p++)
        for (int m = 1; m <= M; m++)
            for (int c = 1; c <= C; c++)
                result = min(result, abs(((p + m) * (m + c)) - X));

    cout << result;
}