#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> day = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int N; cin >> N; int d; cin >> d;
    if ((N % 4 == 0 && N % 100 != 0) || (N%400 == 0)) day[1]++;

    int count = 0;
    for (int i=0; i<12; i++)
        {
            int first = 7 - d + 1;
            int middle = (day[i] - first)/7;
            int last = (day[i] - first)%7;

            if (middle == 2) count += 7;
            else if (middle == 3) 
            {
                if (first + last - 7 > 0) count += first + last - 7;
            }
            else if (middle == 4) count += first + last;

            d = 7 - last + 1;
        }
    cout << count;
}