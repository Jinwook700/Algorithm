#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    int i = 1;
    while(true)
        {
            int num; cin >> num;
            cout << "Case " << i << ":" << "\n";
            for (int j=0; j<num; j++)
                {
                    int grade; cin >> grade;
                    if (grade != 6) cout << grade + 1 << "\n";
                }
            i++;
            if (i == T + 1) break;
        }
}