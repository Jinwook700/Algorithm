#include <iostream>
using namespace std;

int main() {
    string str; getline(cin, str);
    string word; getline(cin, word);
    int count = 0;
    int length = word.length();
    int strLength = str.length();

    int i=0;
    while(i<strLength - length + 1)
        {
            string check = str.substr(i, length);
            if (check == word)
            {
                count++;
                i += length;
            }
            else i++;
        }
    cout << count;
}
