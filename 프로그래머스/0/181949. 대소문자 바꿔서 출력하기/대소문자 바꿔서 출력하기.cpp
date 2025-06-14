#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (char c : str)
    {
        if (c - 'a' >= 0) 
        {
            char upper = toupper(c);
            cout << upper;
        }
        else 
        {
            char lower = tolower(c);
            cout << lower;
        }
    }
    return 0;
}