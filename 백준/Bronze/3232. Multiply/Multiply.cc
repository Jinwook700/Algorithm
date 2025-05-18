#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int multiply (int num, int x)
{
    int sum = 0;
    string number = to_string(num);
    for (int j=0; j<number.length(); j++) sum += (number[j] - '0') 
        * pow(x, number.length() - j - 1);
    return sum;
}

bool isLarge (int num, int x)
{
    string str = to_string(num);
    for (int k=0; k<str.length(); k++)
        {
            if (str[k] - '0' >= x) return false;
        }
    return true;
}

int main()
{
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            int p, q, r; cin >> p >> q >> r;
            for (int B=2; B<17; B++)
                {
                    if (!isLarge(p, B) || !isLarge(q, B) || !isLarge(r, B))
                        continue;
                  
                    if (multiply(p, B)*multiply(q, B) == multiply(r, B))
                    {
                        cout << B << "\n";
                        break;
                    }
                    else if (B == 16) cout << "0" << "\n";
                }
        }
}