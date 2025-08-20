#include <iostream>
using namespace std;

int main()
{
    int N, Q; cin >> N >> Q;
    string str; cin >> str;
    while(Q--)
        {
            int a, b, d; cin >> a >> b >> d;
            if (a == 2)
            {
                string newStr;
                int num = 0;
                for (char c : str)
                    {
                        num++;
                        if (num < b || num > d) 
                        {
                            newStr += c;
                            continue;
                        }
                        if (c == 'Z') c = 'A';
                        else c += 1;
                        newStr += c;
                    }
                str = newStr;
            }
            else
            {
                int count = 1;
                char beforeChar = str[b-1];
                for (int i=b-1; i<d; i++)
                    {
                        if (str[i] != beforeChar) count++;
                        beforeChar = str[i];
                    }
                cout << count << "\n";
            }
        }
}