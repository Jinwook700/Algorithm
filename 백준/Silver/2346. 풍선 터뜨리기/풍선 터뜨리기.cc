#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N; cin >> N;
    deque<pair<int, int>> dq(N);
    for (int i=0; i<N; i++) 
        {
            cin >> dq[i].first;
            dq[i].second = i + 1;
        }

    for (int i=0; i<N; i++)
        {
            int temp = dq.front().first;
            cout << dq.front().second << " ";

            dq.pop_front();
            if (dq.empty()) break;
            
            if (temp > 0)
            {
                for (int j=0; j < temp - 1; j++)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
            else
            {
                for (int j=0; j < abs(temp); j++)
                    {
                        dq.push_front(dq.back());
                        dq.pop_back();
                    }
            }
        }
}