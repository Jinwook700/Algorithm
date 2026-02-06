#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    int p, q, r, s; cin >> p >> q >> r >> s;
    int firstTerm; cin >> firstTerm;

    vector<int> v(N + 1, 0);
    v[1] = firstTerm;
    int total = firstTerm;
    for (int i = 2; i < N + 1; i++)
        {
            if (i % 2 == 0) v[i] = p * v[i/2] + q;
            else v[i] = r * v[(i-1)/2] + s;
            total += v[i];
        }
    cout << total;

    return 0;
}