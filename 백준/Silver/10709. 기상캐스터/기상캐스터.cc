#include <iostream>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    for (int i=0; i<N; i++)
        {
            bool flag = false;
            int num = 0;
            for (int j=0; j<M; j++)
                {
                    char ch; cin >> ch;
                    if (ch == 'c')
                    {
                        flag = true;
                        cout << 0 << " ";
                        num = 0;
                    }
                    else if (ch == '.' && !flag) cout << -1 << " ";
                    else
                    {
                        num++;
                        cout << num << " ";
                    }
                }
            cout << "\n";
        }
}