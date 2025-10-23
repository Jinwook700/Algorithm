#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--)
        {
            int N, M; cin >> N >> M;
            queue<pair<int, int>> q;
            vector<int> v;
            for (int i=0; i<N; i++)
                {
                    int num; cin >> num;
                    v.push_back(num);
                    q.push({num, i});
                }
            sort(v.begin(), v.end(), greater<int>());

            int index = 0;
            int cnt = 0;
            while(true)
                {
                    if (q.front().first < v[index])
                    {
                        q.push({q.front().first, q.front().second});
                        q.pop();
                    }
                    else
                    {
                        index++;
                        cnt++;
                        if (q.front().second == M)
                        {
                            cout << cnt << "\n";
                            break;
                        }
                        
                        q.pop();
                    }
                    if (index == N) break;
                }
        }
}