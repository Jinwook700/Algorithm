#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s; cin >> s;
    int result = 0;
    for (int i=0; i<5; i++) result += pow(int(s[i])-48,5);
    cout << result;
}