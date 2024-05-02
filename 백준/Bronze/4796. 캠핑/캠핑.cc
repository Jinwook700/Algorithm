#include <iostream>
using namespace std;

int main() {
    int num = 0;
    while(true) {
        int L, P, V; cin >> L >> P >> V; 
        if (L == 0 && P == 0 && V == 0) break;
        num++;
        int day = 0;
        if (V-V/P*P>=L) day = L;
        else day = V-V/P*P; 
        cout << "Case "<< num << ": " <<V/P*L + day << "\n";
    }
}