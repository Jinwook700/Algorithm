#include <iostream>
using namespace std;

int zero[41];
int one[41];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    zero[0] = 1; zero[1] = 0;
    one[0] = 0; one[1] = 1;
    for (int i = 2; i <= 40; i++)
        {
            zero[i] = zero[i-2] + zero[i-1];
            one[i] = one[i-2] + one[i-1];
        }
    
    int T; cin >> T;
    while(T--)
        {
            int num; cin >> num;
            cout << zero[num] << " " << one[num] << "\n";
        }
}