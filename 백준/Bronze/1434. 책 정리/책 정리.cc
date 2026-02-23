#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    vector<int> box(N);
    vector<int> book(M);
    for (int i = 0; i < N; i++) cin >> box[i];
    for (int i = 0; i < M; i++) cin >> book[i];

    int result = 0;
    int boxIndex = 0;
    int bookIndex = 0;
    
    while (true)
        {
            if (box[boxIndex] >= book[bookIndex])
            {
                box[boxIndex] -= book[bookIndex];
                bookIndex++;
            }

            else boxIndex++;

            if (boxIndex == N || bookIndex == M) break;
        }

    for (int i = 0; i < N; i++) result += box[i];

    cout << result;
}