#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    vector<int> v;
    for (int i=1; i<=N; i++)
        {
            if (i%10 == K%10 || i%10 == (K*2)%10) continue;
            v.push_back(i);
        }
    cout << v.size() << "\n";
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
}