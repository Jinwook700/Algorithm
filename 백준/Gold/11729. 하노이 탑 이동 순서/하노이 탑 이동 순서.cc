#include <iostream>
#include <cmath>
using namespace std;

//갯수, 출발, 도착, 보조
void hanoi(int N, int start, int middle, int end)
{
    if (N == 1)
    {
        cout << start << " " << end << "\n";
        return;
    }
    else
    {
        hanoi(N-1, start, end, middle);
        cout << start << " " << end << "\n";
        hanoi(N-1, middle, start, end);
    }
}

int main()
{
    int N; cin >> N;
    cout << (int)round(pow(2, N)) - 1 << "\n";
    hanoi (N, 1, 2, 3);
}