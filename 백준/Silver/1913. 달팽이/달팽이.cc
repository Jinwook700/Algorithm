#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, number; cin >> N >> number;
    vector<vector<int>> v(N, vector<int>(N));

    int middle = (N-1)/2;
    int first = middle;
    int second = middle;
    int count = 0;
    int num = 1;

    v[first][second] += num;
    
    while (true)
        {
            count++;
            for (int i=0; i<count; i++)
                {
                    first--;
                    num++;
                    v[first][second] += num;
                }
            for (int j=0; j<count; j++)
                {
                    second++;
                    num++;
                    v[first][second] += num;
                }
            count++;
            for (int k=0; k<count; k++)
                {
                    first++;
                    num++;
                    v[first][second] += num;
                }
            for (int l=0; l<count; l++)
                {
                    second--;
                    num++;
                    v[first][second] += num;
                }
            if (count == middle * 2) break;
        }
    for (int m=0; m<count; m++)
        {
            first--;
            num++;
            v[first][second] += num;
        }
    int answerX = 0;
    int answerY = 0;
    for (int n=0; n<N; n++)
        {
            for (int o=0; o<N; o++)
                {
                    if (v[n][o] == number)
                    {
                        answerX = n;
                        answerY = o;
                    }
                    cout << v[n][o] << " ";
                }
            cout << "\n";
        }
    cout << answerX+1 << " " << answerY+1;
            
}
