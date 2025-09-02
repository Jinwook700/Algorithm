#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> v(N - 1);
    for (int i=0; i<N-1; i++) v[i] = i + 2;
    int count = 0;
    while(true)
        {
            int firstNum = 0;
            for (int i=0; i<N-1; i++)
                {
                    if (v[i] != 0)
                    {
                        firstNum = v[i];
                        //out << "first Num : " << firstNum << "\n";
                        break;
                    }
                }
            for (int i=0; i<N-1; i++)
                {
                    if (v[i] != 0 && v[i]%firstNum == 0)
                    {
                        count++;
                        if (count == K)
                        {
                            cout << v[i];
                            break;
                        }
                        //cout << "v[i] : " << v[i] << "\n";
                        v[i] = 0;
                    }
                }
            if (count == K) break;
        }
}