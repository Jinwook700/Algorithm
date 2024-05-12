#include <iostream>
using namespace std;

int main() {
    long arr[3] = {0};
    for (int i=0; i<2; i++) {
        string s; cin >> s;
        if (s == "black") arr[i] = 0;
        else if (s == "brown") arr[i] = 1;
        else if (s == "red") arr[i] = 2;
        else if (s == "orange") arr[i] = 3;
        else if (s == "yellow") arr[i] = 4;
        else if (s == "green") arr[i] = 5;
        else if (s == "blue") arr[i] = 6;
        else if (s == "violet") arr[i] = 7;
        else if (s == "grey") arr[i] = 8;
        else if (s == "white") arr[i] = 9;
    }
    string s; cin >> s;
    if (s == "black") arr[2] = 1;
    else if (s == "brown") arr[2] = 10;
    else if (s == "red") arr[2] = 100;
    else if (s == "orange") arr[2] = 1000;
    else if (s == "yellow") arr[2] = 10000;
    else if (s == "green") arr[2] = 100000;
    else if (s == "blue") arr[2] = 1000000;
    else if (s == "violet") arr[2] = 10000000;
    else if (s == "grey") arr[2] = 100000000;
    else if (s == "white") arr[2] = 1000000000;
    cout << arr[0]*10*arr[2] + arr[1]*arr[2];
}