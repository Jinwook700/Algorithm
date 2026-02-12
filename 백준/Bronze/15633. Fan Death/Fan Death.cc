#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++)
        {
            if (n % i == 0) s.insert(n/i);
        }
    int result = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
        result += *it;
    cout << result * 5 - 24;
}