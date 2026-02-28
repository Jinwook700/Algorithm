#include <iostream>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int a, b, c, d;
    bool isFirst = true;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            {
                int num; cin >> num;
                if (num == 1 && isFirst)
                {
                    a = i, b = j;
                    isFirst = false;
                }
                if (num == 1 && !isFirst)
                {
                    c = i, d = j;
                }
            }

    cout << abs(d - b) + abs(c - a);

}