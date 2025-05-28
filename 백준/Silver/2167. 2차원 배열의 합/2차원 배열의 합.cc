#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    int N, M; cin >> N >> M;
    int** arr = new int*[N];
    for (int i=0; i<N; i++)
        arr[i] = new int[M];

    for (int q=0; q<N; q++) {
        for (int w=0; w<M; w++) cin >> arr[q][w];
    }

    int T; cin >> T;
    while (T != 0)
        {
            int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
            int sum = 0;
            for (int j=x1-1; j<x2; j++)
                {
                for (int k=y1-1; k<y2; k++)
                    {
                        sum += arr[j][k];
                    }
                }
            cout << sum << "\n";
            T--;
        }
}