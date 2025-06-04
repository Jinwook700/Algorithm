#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> isPrime(1000001, true);
    vector<int> primeNumber;
    isPrime[0] = false; isPrime[1] = false;

    for (int i = 2; i*i <= 1000001; i++)
        {
            for (int j = i * i; j < 1000001; j += i)
                {
                    isPrime[j] = false;
                }
        }
    
    for (int k=0; k < 1000001; k++)
        {
            if (isPrime[k]) 
            {
                primeNumber.push_back(k); 
            }
        }
    
    int T; cin >> T;
    for (int k=0; k<T; k++)
        {
            float num; cin >> num;
            int count = 0;
            int index = 0;
            for (int m=0; m < primeNumber.size(); m++)
                {
                    if (primeNumber[m] * 2 == num)
                    {
                        index = m + 1;
                        break;
                    }
                    else if (primeNumber[m] * 2 > num)
                    {
                        index = m;
                        break;
                    }
                }
            for (int l = 0; l < index; l++)
                {
                    if (num - primeNumber[l] >= 0 && isPrime[num - primeNumber[l]]) count++;
                }
            cout << count << "\n";
        }
}