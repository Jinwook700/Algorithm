#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int answer = N;
    int count = 0;
    while (true)
        {
            if (N == 0)
            {
                cout << 1;
                break;
            }
            else if (N<10) N = N*10 + N;
            else N = (N%10)*10 + (N/10 + N%10)%10;
            count++;
            if (N == answer) 
            {
                cout << count;
                break;
            }
        }
}