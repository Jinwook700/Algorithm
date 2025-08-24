#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string Cantor(string str, int origin, int num)
{
    int divide = origin/(num*3);
    int firstIndex = 0;
    bool flag = false;
    while(true)
        {
            if(flag)
            {
                str.replace(firstIndex, divide, string(divide, ' '));
                flag = false;
            }
            else
            {
                flag = true;
            }
            firstIndex += divide;
            if (firstIndex == origin) break;
        }
    num *= 3;
    if (num == origin) return str;
    else return Cantor(str, origin, num);
}

int main()
{
    int N;
    while(cin >> N)
        {
            string str = "";
            int num = pow(3, N);
            for (int i=0; i<num; i++) str += '-';
            if (N == 0) cout << '-' << "\n";
            else
            {
                string answer = Cantor(str, num, 1);
                cout << answer << "\n";
            }
        }
    
}