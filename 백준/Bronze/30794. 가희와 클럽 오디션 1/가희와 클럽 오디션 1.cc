#include <iostream>
using namespace std;

int main() {
    int lv; cin >> lv;
    string str; cin >> str;
    if (str == "miss") cout << 0;
    else if (str == "bad") cout << 200 * lv;
    else if (str == "cool") cout << 400 * lv;
    else if (str == "great") cout << 600 * lv;
    else if (str == "perfect") cout << 1000 * lv;
}