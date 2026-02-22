#include <iostream>
using namespace std;

int main() {
    string a, b; cin >> a >> b;

    int A = 0, B = 0;

    int index = 1;
    for (char c : a)
        {
            A += (c - '0') * index;
            index *= 10;
        }

    index = 1;
    for (char c : b)
        {
            B += (c - '0') * index;
            index *= 10;
        }

    string sum = to_string(A + B);

    index= 1;
    int result = 0;
    for (char c : sum)
        {
            result += (c - '0') * index;
            index *= 10;
        }

    cout << result;
    return 0;
}