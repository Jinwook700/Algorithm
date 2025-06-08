#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int answer = 0;
    for (int i=0; i<5; i++)
        {
            int num; cin >> num;
            if (num == N) answer++;
        }
    cout << answer;
}