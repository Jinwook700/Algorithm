#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int count = 0;
    for (int i=1; i<N + 1; i++)
        {
            int temp = i;
            while(true)
                {
                    if (temp % 5 == 0) 
                    {
                        temp /= 5;
                        count++;
                    }
                    else break;
                }
        }
    cout << count;
}