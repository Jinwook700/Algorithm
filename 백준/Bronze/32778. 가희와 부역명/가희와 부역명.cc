#include <iostream>
using namespace std;

int main()
{
    string str; getline(cin, str);
    bool flag = false;
    
    for (char c : str)
        {
            if (c == ')') break;
            if (c == '(') 
            {
                flag = true;
                cout << "\n";
                continue;
            }
            cout << c;
        }
    if (!flag) cout << "\n" << '-';
}