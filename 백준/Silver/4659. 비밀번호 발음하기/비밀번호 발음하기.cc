#include <iostream>
using namespace std;

int main() {
    string str = "";
    while (cin >> str)
        {
            if (str == "end") break;

            bool flag1 = false;
            bool flag2 = true;
            bool flag3 = true;
            int vowels = 0;
            int consonants = 0;
            int eCount = 0;
            int oCount = 0;
            char ch = '?';
            for (char c : str)
                {
                    if (c == ch && c != 'e' && c != 'o')
                    {
                        flag3 = false;
                        break;
                    }
                    else if (c == 'e')
                    {
                        eCount++;
                        oCount = 0;
                    }
                    else if (c == 'o') 
                    {
                        oCount++;
                        eCount = 0;
                    }
                    else
                    {
                        eCount = 0;
                        oCount = 0;
                    }
                    if (eCount == 3 || oCount == 3)
                    {
                        flag3 = false;
                        break;
                    }
                    ch = c;
                }

            for (char c : str)
                {
                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    {
                        flag1 = true;
                        vowels++;
                        consonants = 0;
                        if (vowels == 3)
                        {
                            flag2 = false;
                            break;
                        }
                    }
                    else
                    {
                        consonants++;
                        vowels = 0;
                        if (consonants == 3)
                        {
                            flag2 = false;
                            break;
                        }
                    }
                }
            cout << "<" << str << "> is ";
            if (flag1 && flag2 && flag3) cout << "acceptable.\n";
            else cout << "not acceptable.\n";
        }
}