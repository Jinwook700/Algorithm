#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Reverse(string num)
{
    int sum = 0;
    for (int j=0; j<(int)num.length(); j++) sum += (num[num.length() - j - 1] - '0')
        * pow(10, (num.length() - j - 1));
    return sum;
}

int ZeroDelete(string str)
    {
        while (str[str.length()-1] == '0')
                {
                    int c = stoi(str) / 10;
                    str = to_string(c);
                }
        return Reverse(str);
    }

int main() 
{
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            string a, b; cin >> a >> b;
            
            int A = ZeroDelete(a);
            int B = ZeroDelete(b);
            string sum = to_string(A + B);

            cout << ZeroDelete(sum) << "\n";
        }
}