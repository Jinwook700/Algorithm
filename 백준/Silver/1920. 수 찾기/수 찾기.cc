#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    set<int> s;
    for (int i=0; i<N; i++)
        {
            int num1; cin >> num1;
            s.insert(num1);
        }
    int M; cin >> M;
    for (int j=0; j<M; j++)
        {
            int num2; cin >> num2;
            if (s.count(num2)) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
}