#include <iostream>
#include <vector>
using namespace std;

void printVect(vector<int> v)
{
    int size = v.size();
    for (int i=0; i<size; i++) cout << v[i] << " ";
}

int main() {
    int N; cin >> N;
    vector<pair<int, int>> v(N);
    vector<int> answer(N, 0);
    for (int i=0; i<N; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }

    for (int i=0; i<N; i++)
        {
            int index = 0;
            int tallIndex = 0;
            bool flag = true;
            while(flag)
                {
                    if (tallIndex == v[i].first)
                    {
                        while(flag)
                            {
                                if (answer[index] == 0)
                                {
                                    answer[index] = v[i].second;
                                    flag = false;
                                }
                                index++;
                            }
                        
                    }
                    if (answer[index] == 0) tallIndex++;
                    index++;
                }
        }
    printVect(answer);
}