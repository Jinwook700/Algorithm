#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ZeroDelete(string str)
    {
        int index = 1;
        while (str[str.length()-index] == '0')
                {
                    int c = stoi(str) / 10;
                    str = to_string(c);
                    index++;
                }
        return str;
    }

int main() 
{
    cout << "A";
}