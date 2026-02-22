#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    char firstChar = str[0];
    if (firstChar == 'F') cout << "Foundation";
    else if (firstChar == 'C') cout << "Claves";
    else if (firstChar == 'V') cout << "Veritas";
    else if (firstChar == 'E') cout << "Exploration";
}