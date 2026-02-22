#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];

    for (int i = 0; i < N; i++)
        {
            string str = v[i];
            reverse(str.begin(), str.end());
            if (count(v.begin(), v.end(), str) != 0)
            {
                cout << str.length() << " " << str[str.length() / 2];
                break;
            }
        }

    return 0;
}