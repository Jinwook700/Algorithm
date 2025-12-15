#include <iostream>
#include <vector>
#define MAX 15
using namespace std;

vector<int> v(MAX);
int N, cnt = 0;

bool check(int level)
{
    for (int i=0; i<level; i++)
        if (v[i] == v[level] || abs(v[i] - v[level]) == level - i)
            return false;
    return true;
}

void Nqueen(int x)
{
    if (x == N) cnt ++;

    else
    {
        for (int i=0; i<N; i++)
        {
            v[x] = i;
            if (check(x)) Nqueen(x + 1);
        }
    }  
}

int main() {
    cin >> N;
    Nqueen(0);
    cout << cnt;
}