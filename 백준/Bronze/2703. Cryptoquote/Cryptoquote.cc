#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    cin.ignore();
    for (int i=0; i<T; i++)
    {
        string a, b;
        
        getline(cin, a);
        getline(cin, b);
        
        int index = 0;
        for(int j=0; j<a.length(); j++)
        {
            if (a[index] == ' ') cout << " ";
            else cout << b[a[index] - 'A'];
            index++;
        }
        cout << "\n";
    }
}