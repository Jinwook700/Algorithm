#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i=0; i<8; i++)
        {
            string str; cin >> str;
            for (int j=0; j<8; j++)
                {
                    if (i%2 == 0 && j%2 == 0 && str[j] == 'F') count++;
                    else if (i%2 == 1 && j%2 == 1 && str[j] == 'F') count++;
                }
        }
    cout << count;

}