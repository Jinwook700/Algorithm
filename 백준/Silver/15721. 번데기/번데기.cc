#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, T, B; cin >> A >> T >> B;
    string str = "";
    int n = 2;
    while (str.length()<10000) 
        {
            str += "0101";
            for (int i=0; i<n; i++) str += '0';
            for (int j=0; j<n; j++) str += '1';
            n++;
        }
    int index = 0;
    for (char c : str)
        {
            if (c == B + '0') T--;
            if (T == 0)
            {
                cout << index % A;
                break;
            }
            index++;
        }
}