#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    int xCount = 0;
    bool flag = true;
    string answer = "";
    for (int i=0; i<str.length(); i++)
        {
            if (str[i] == 'X') xCount++;

            if (str[i] == '.' && xCount != 0) flag = false;
            else if (str[i] == '.')
            {
                answer += '.';
                xCount = 0;
            }
            else if (xCount == 2 && i<str.length()-1 && str[i+1] == '.')
            {
                answer += "BB";
                xCount = 0;
            }
            else if (xCount == 2 && i == str.length()-1) answer+= "BB";
            else if (xCount == 4)
            {
                answer+= "AAAA";
                xCount = 0;
            }
            else if (i == str.length() - 1) flag = false;
        }
    if (flag) cout << answer;
    else cout << -1; 
}