#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    int _case = 1;
    while(T--)
        {
            int N, L; cin >> N >> L;
            vector<int> v(N); 
            for (int i=0; i<N; i++) cin >> v[i];
            sort(v.begin(), v.end());
            
            int sum = 0;
            int total = 0;
            int index = 0;
            while(true)
                {
                    if (sum + v[index] <= L) 
                    {
                        sum += v[index];
                        total += sum;
                        index++;
                    }
                    if (sum + v[index] > L || index == N) break;
                }
            //if (total == 0) index = -1;
            cout << "Case " << _case << ": " << index << " " <<
                sum << " " << total << "\n";
            _case++;
        }
}