#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i=0; i<3; i++) {
        int count = 0;
        for (int j=0; j<4; j++) {
            int Num; cin >> Num;
            if (Num == 1) count += 1;
        }
        switch (count) {
            case 0:
                cout << "D" << "\n";
                break;
            case 1:
                cout << "C" << "\n";
                break;
            case 2:
                cout << "B" << "\n";
                break;
            case 3:
                cout << "A" << "\n";
                break;
            case 4:
                cout << "E" << "\n";
                break;
            default:
                break;
        }
    }
}