#include <iostream>
using namespace std;

int main()
{
    string a,b,c; cin >> a >> b >> c;
    int num = 0;
    if (a[0] - '0' < 11) 
    {
        num = stoi(a);
        num += 3;
    }
    else if (b[0] - '0' < 11)
    {
        num = stoi(b);
        num += 2;
    }
    else
    {
        num = stoi(c);
        num += 1;
    }

    if (num % 3 != 0 && num % 5 != 0) cout << num;
    else if (num % 3 == 0 && num % 5 != 0) cout << "Fizz";
    else if (num % 3 != 0 && num % 5 == 0) cout << "Buzz";
    else cout << "FizzBuzz";
}