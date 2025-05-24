#include <iostream>
using namespace std;

int main()
{
    int money; cin >> money;
    int bnp = money;
    int bnpCount = 0;
    int timing = money;
    int timingCount = 0;
    int arr[14] = {0};
    
    for (int i=0; i<14; i++)
        {
            int num; cin >> num;
            arr[i] = num;
            while(true)
                {
                    if (bnp - num < 0) break;
                    bnp -= num;
                    bnpCount++;                 
                }
        }
    
    int beforePrice = arr[0];
    int upCount = 0;
    int downCount = 0;
    for (int j=1; j<14; j++)
        {
            if (arr[j] > beforePrice)
                {
                    upCount++;
                    downCount = 0;
                }
            else if (arr[j] < beforePrice)
            {
                downCount++;
                upCount = 0;
            }
            else
            {
                upCount = 0;
                downCount = 0;
            }

            if (upCount == 3 && timingCount != 0)
            {
                timing += arr[j] * timingCount;
                timingCount = 0;
                upCount = 0;
                downCount = 0;
            }
            if (downCount == 3)
            {
                while(true)
                    {
                        if (timing - arr[j] <0) break;
                        timing -= arr[j];
                        timingCount++;
                    }
                upCount = 0;
                downCount = 0;
            }
        }

    int a = bnp + bnpCount * arr[13];
    int b = timing + timingCount * arr[13];
    if (a > b) cout << "BNP";
    else if (a < b) cout << "TIMING";
    else cout << "SAMESAME";
}