#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q; cin >> N >> Q;
    vector<long long> v(N);
    while(Q--)
        {
            int a, b, c; cin >> a >> b >> c;
            if (a == 1)
            {
                v[b-1] += c;
            }
            else
            {
                long long sum = 0;
                for (int i=b-1; i<c; i++)
                    {
                        sum += v[i];
                    }
                cout << sum << "\n";
            }
        }
}