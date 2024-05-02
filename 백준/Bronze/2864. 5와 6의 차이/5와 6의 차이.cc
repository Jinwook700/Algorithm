#include <iostream>
#include <cmath>
using namespace std;

int maxi(string str) {
    int str_size = str.length();
    int result_max = 0;
    for (int i=0; i<str_size; i++) {
        string s1(1,str[i]);
        if (s1 == "5") result_max += 6*pow(10, str_size-i-1);
        else result_max += stoi(s1)*pow(10, str_size-i-1);
    }
    return result_max;
}

int mini(string str) {
    int str_size = str.length();
    int result_max = 0;
    for (int i=0; i<str_size; i++) {
        string s1(1,str[i]);
        if (s1 == "6") result_max += 5*pow(10, str_size-i-1);
        else result_max += stoi(s1)*pow(10, str_size-i-1);
    }
    return result_max;
}

int main() {
    string A, B; cin >> A >> B;
    cout << mini(A) + mini(B) << " " << maxi(A) + maxi(B);
}