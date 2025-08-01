#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    for (n = 1; n<4; n++)
        {
            if (n == 1 || n == 3)
    {
        bool flag = false;
        bool isFirst = false;
        bool isFront = false;
        if (n == 1) isFront = true;
        if (n == 3) isFirst = true;
        
        for (char c : str)
            {
                if (isFront)
                {
                    char ch = tolower(c);
                    cout << ch;
                    isFront = false;
                }
                else if (isFirst)
                {
                    char ch = toupper(c);
                    cout << ch;
                    isFirst = false;
                }
                else if (flag)
                {
                    char ch = toupper(c);
                    cout << ch;
                    flag = false;
                }
                else if (c == '_')
                {
                    flag = true;
                    continue;
                }
                else cout << c;
            }
        cout << "\n";
    }
        
    else if (n == 2)
    {
        bool isFront = true;
        for (char c : str)
            {
                if (isFront)
                {
                    char ch = tolower(c);
                    cout << ch;
                    isFront = false;
                }
                else if (c >= 65 && c <= 90)
                {
                    char ch = tolower(c);
                    cout << '_' << ch;
                }
                else cout << c;
            }
        cout << "\n";
    }
        }
}