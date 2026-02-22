#include <iostream>
using namespace std;

int main() {
    float N, W, H; cin >> N >> W >> H;
    float C = W*W + H*H;
    
    while (N--)
        {
            float num; cin >> num;
            if (num * num <= C) cout << "DA" << "\n";
            else cout << "NE" << "\n";
        }
}