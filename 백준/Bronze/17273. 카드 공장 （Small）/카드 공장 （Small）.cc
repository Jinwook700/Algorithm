#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> front(N, 0);
    vector<int> back(N, 0);
    for (int i = 0; i < N; i++)
        {
            cin >> front[i] >> back[i];
        }

    for (int i = 0; i < M; i++)
        {
            int K; cin >> K;
            for (int j = 0; j < N; j++)
                {
                    if (front[j] <= K) swap(front[j], back[j]);
                }
        }

    int result = 0;
    for (int i = 0; i < N; i++) result += front[i];

    cout << result;
}