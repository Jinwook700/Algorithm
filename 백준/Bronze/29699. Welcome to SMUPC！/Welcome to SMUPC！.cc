#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    string str = "WelcomeToSMUPC";
    int index = -1;
    for (int i = 1; i <= N; i++)
        {
            index++;
            if (index == 14) index = 0;
        }
    cout << str[index];
}