#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int year = 2024 + (8 + (n-1)*7)/13;
    int month = (8 + (n-1)*7)%12;
    if (month == 0) month = 12;
    cout << year << " " << month;
}