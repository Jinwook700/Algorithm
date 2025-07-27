#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    for (int i=0; i<64; i++)
        {
            char ch; cin >> ch;
            if (ch == 'p') result -= 1;
            else if (ch == 'n' || ch == 'b') result -= 3;
            else if (ch == 'r') result -= 5;
            else if (ch == 'q') result -= 9;
            else if (ch == 'P') result += 1;
            else if (ch == 'N' || ch == 'B') result += 3;
            else if (ch == 'R') result += 5;
            else if (ch == 'Q') result += 9;
        }
    cout << result;
}