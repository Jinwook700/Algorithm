#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int answer = 0;
    int arr[10] = {0};
    for (int j=0; j<10; j++) arr[j] = 2;
    for (int i=0; i<N; i++)
        {
            int a, b; cin >> a >> b;
            if (b == 1 && arr[a-1] == 0)
            {
                answer++;
                arr[a-1] = 1;
            }
            else if (b == 0 && arr[a-1] == 1)
            {
                answer++;
                arr[a-1] = 0;
            }
            else arr[a-1] = b;
        }
    cout << answer;
}