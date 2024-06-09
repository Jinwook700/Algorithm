#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int count = 0;
    for (char c : S) {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            count++;
        }
    }
    cout << count;
}