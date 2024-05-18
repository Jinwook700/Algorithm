#include <iostream>
using namespace std;

int main() {
    int x,y; cin >> x >> y;
    int arr[12] = {31, 28, 31, 30, 31 ,30, 31, 31, 30, 31, 30, 31};
    for (int i=1; i<x; i++) y += arr[i-1];
    string day = "";
    int day_num = y%7;
    switch(day_num) {
        case 1:
            day = "MON";
            break;
        case 2:
            day = "TUE";
            break;
        case 3:
            day = "WED";
            break;
        case 4:
            day = "THU";
            break;
        case 5:
            day = "FRI";
            break;
        case 6:
            day = "SAT";
            break;
        case 0:
            day = "SUN";
            break;
    }
    
    cout << day;
}