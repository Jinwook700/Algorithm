#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c)
        {
            int date = 0;
            if (a == 0 && b == 0 && c == 0) break;
            if ((c % 400 == 0 || (c % 4 == 0 && c % 100 != 0)) && b > 2) date ++;
            for (int i=1; i<b; i++)
                {
                    if (i == 2) date += 28;
                    else if (i == 4 || i == 6 || i == 9 || i == 11) date += 30;
                    else date += 31;
                }
            date += a;
            cout << date << "\n";
        }
}