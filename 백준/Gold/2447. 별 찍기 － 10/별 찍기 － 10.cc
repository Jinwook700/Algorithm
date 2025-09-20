#include <iostream>
#include <vector>
using namespace std;

void star(int i, int j, int num)
{
    if (num == 1)
    {
        cout << "*";
    }
    else if ((i/(num/3))%3 == 1 && (j/(num/3))%3 == 1)
    {
        cout << " ";
    }
    else
    {
        star(i, j, num/3);
    }
}

int main()
{
    int N; cin >> N;
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    star(i, j, N);
                }
            cout << "\n";
        }
}