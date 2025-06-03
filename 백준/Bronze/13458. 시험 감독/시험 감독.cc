#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, B, C; cin >> N;
    vector<int> room;
    for (int i=0; i<N; i++)
        {
            int A; cin >> A;
            room.push_back(A);
        }
    cin >> B >> C;
    long long answer = N;
    for (int j=0; j<N; j++) 
        {
            int num = room[j] - B;
            if (num > 0)
            {
                if (num%C == 0) answer += num/C;
                else answer += num/C + 1;
            }
        }
    cout << answer;
}