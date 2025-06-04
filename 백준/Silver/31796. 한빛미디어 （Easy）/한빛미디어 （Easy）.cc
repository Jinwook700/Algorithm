#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    int answer = 1;
    vector<int> v;
    for (int i=0; i<N; i++)
        {
            int price; cin >> price;
            v.push_back(price);
        }
    sort(v.begin(), v.end());
    int temp = v[0];
    for (int j=0; j<N; j++)
    {
        if (v[j] >= temp*2) 
        {
            answer++;
            temp = v[j];
        }
    }
    cout << answer;
}