#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int index = 0;
    for (int i=0; i<13; i++)
        {
            char ch; cin >> ch;
            if (ch == '*') 
            {
                index = i;
                continue;
            }
            if (i%2 == 0) sum += ch - '0';
            else sum += 3*(ch - '0');
        }
    if (sum%10 == 0) cout<< 0;
    else if (index%2 == 1)
    {
        int num = 0;
        while(true)
            {
                num++;
                if ((num*3 + sum)%10 == 0)
                {
                    cout << num;
                    break;
                }
            }
    }
    else cout << 10 - sum%10;
}