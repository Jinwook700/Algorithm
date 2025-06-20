#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    deque<int> isStack;
    deque<int> dq;
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            isStack.push_back(num);
        }
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            if (isStack[i] == 0) dq.push_back(num);
        }

    int M; cin >> M;
    while(M--)
        {
            int num; cin >> num;
            dq.push_front(num);
            cout << dq.back() << " ";
            dq.pop_back();
        }
}