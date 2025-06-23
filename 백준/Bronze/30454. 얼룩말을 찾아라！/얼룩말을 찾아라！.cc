#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, L; cin >> N >> L;
    vector<int> v;
    for (int i=0; i<N; i++)
        {
            string str; cin >> str;
            int count = 0;
            char first = str[0];
            if (first == '1') count++;
            for (char c : str)
                {
                    if (c != first && c == '1') count++;
                    first = c;
                }
            v.push_back(count);
        }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0] << " " << count(v.begin(), v.end(), v[0]);
}