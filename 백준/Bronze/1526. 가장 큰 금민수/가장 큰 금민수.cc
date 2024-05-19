#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; cin >> N;
    
    while(true) {
        string s = to_string(N);
        int size_num = s.length();
        int count = 0;
        for (char c : s) {
            if (c == '4' || c == '7') count += 1;
        }
        
        if (count == size_num) break;
        
        N -= 1;
    }
    
    cout << N;
}