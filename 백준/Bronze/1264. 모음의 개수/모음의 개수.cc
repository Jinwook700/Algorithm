#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while(getline(cin, str))
        {
            if (str == "#") break;
            int count = 0;
            for (char c : str)
                {
                    char ch = tolower(c);
                    if (ch == 'a' || ch == 'e' || ch == 'i' 
                        || ch == 'o' || ch == 'u') count++;
                }
            cout << count << "\n";
        }
}