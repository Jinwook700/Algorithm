#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    string s = str + str;
    int a = 0, b = 0;
    for (char c : str)
        {
            if (c == 'a') a++;
            if (c == 'b') b++;
        }

    int result = str.size();
    for (int i=0; i<str.size(); i++)
        {
            int cnt = 0;
            for (int j=i; j<i+a; j++)
                if (s[j] == 'b') cnt++;
            result = min(cnt, result);
            
            cnt = 0;
            for (int j=i; j<i+b; j++)
                if (s[j] == 'a') cnt++;
            result = min(cnt, result);
        }
    cout << result;
}