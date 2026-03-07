#include <iostream>
using namespace std;

int main() {
    int result = 0;
    
    while(true)
        {
            string str; getline(cin, str);
            if (str == "") break;
            result++;
        }
    cout << result;
}