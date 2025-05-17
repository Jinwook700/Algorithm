#include <iostream>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    for (int i=0; i<N; i++)
        {
            string str = "";
            string boong; cin >> boong;
            for (int j=0; j<M; j++) str += boong[M-j-1];
            cout << str << "\n";
        }
}