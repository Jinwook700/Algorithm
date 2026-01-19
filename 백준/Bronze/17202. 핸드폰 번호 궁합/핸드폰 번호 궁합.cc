#include <iostream>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    string num = "";
    for (int i=0; i<8; i++)
        {
            num += a[i];
            num += b[i];
        }
    while(num.size() != 2)
        {
            int size = num.size();
            string newNum = "";
            for (int i=0; i<size - 1; i++)
                {
                    newNum += (char)((num[i] - '0' + num[i+1] - '0')%10 + '0');
                }
            num = newNum;
        }
    cout << num;
}
