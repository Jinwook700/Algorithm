#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<char> v(N);
    for (int i=0; i<N; i++) cin >> v[i];
    bool flag = false;
    if (v[0] == 'R') flag = true;
    int blue = 0;
    int red = 0;
    for (int j=0; j<N; j++)
        {
            if (v[j] == 'B' && flag == false)
            {
                flag = true;
                blue++;
            }
            else if (v[j] == 'R' && flag == true)
            {
                flag = false;
                red++;
            }
        }
    cout << min(blue, red) + 1;
}