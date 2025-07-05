#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int cost = 0;
    for (int i=0; i<6; i++)
        {
            cin >> num;
            cost += num;
        }
    cout << cost * 5;
}