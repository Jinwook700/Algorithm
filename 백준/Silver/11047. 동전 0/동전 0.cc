#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    vector<int> v;
    for (int i=0; i<N; i++)
        {
            int A; cin >> A;
            v.push_back(A);
        }
    int count = 0;
    while (K != 0)
        {
            if (K - v[N-1] < 0) N--;
            else 
            {
                K -= v[N-1];
                count++;
            }
        }
    cout << count;
}