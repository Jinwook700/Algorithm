#include <iostream>
using namespace std;

int main()
{
    string str = "";
    while(getline(cin, str))
        {
            //cin.ignore();
            cout << str << "\n";
        }
}