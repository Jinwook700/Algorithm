#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string str; cin >> str;
    int sCount = 0;
    int bCount = 0;
    for (char c : str)
        {
            if (c == 's') sCount++;
            else if (c == 'b') bCount++;
        }
    if (sCount == bCount) cout << "bigdata? security!";
    else if (sCount > bCount) cout << "security!";
    else cout << "bigdata?";
}