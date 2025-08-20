#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B; cin >> A >> B;
    int m; cin >> m;

    int value = 0;
    for (int i=0; i<m; i++)
        {
            int num; cin >> num;
            value +=  num*pow(A, m-i-1);
        }

    int maxNum = 0;
    while(true)
        {
            if (value / pow(B, maxNum) <= 1) break;
            maxNum++;
        }
    
    for (int i=0; i<maxNum; i++)
        {
            int printNum = value / pow(B, maxNum - i - 1);
            cout << printNum << " ";
            value = value % (int)pow(B, maxNum - i - 1);
        }
}