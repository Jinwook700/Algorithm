#include <iostream>
#include <vector>
using namespace std;

int fibo1(int num, int &result1)
{
    if (num == 1 || num == 2) 
    {
        result1++;
        return 1;
    }
    else return (fibo1(num-1, result1) + fibo1(num-2, result1), result1);
}

int fibo2(int num, int& result2)
{
    vector<int> f(num + 1);
    f[1] = f[2] = 1;
    for (int i=3; i<=num; i++)
        {
            f[i] = f[i-1] + f[i-2];
            result2++;
        }
    return f[num];
}

int main()
{
    int N; cin >> N;
    int result1 = 0, result2 = 0;
    int a = fibo1(N, result1), b = fibo2(N, result2);
    cout << result1 << " " << result2;
}