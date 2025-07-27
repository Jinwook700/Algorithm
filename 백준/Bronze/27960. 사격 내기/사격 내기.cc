#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void checkScore(vector<int>& v, int num)
{
    while(num != 0)
        {
            int n = 1;
            int count = 0;
            while(true)
                {
                    if (n*2 > num) break;
                    n *= 2;
                    count++;
                }
            num -= n;
            v[count]++;
        }
}

int main()
{
    int A, B; cin >> A >> B;
    vector<int> aScore(10, 0);
    vector<int> bScore(10, 0);
    int result = 0;
    
    checkScore(aScore, A);
    checkScore(bScore, B);
    for (int i=0; i<10; i++)
        {
            if (aScore[i] != bScore[i]) result += pow(2, i);
        }
    cout << result;
}