#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(15);
    for (int i = 0; i < 15; i++) cin >> v[i];
    int maxLength = *max_element(v.begin(), v.end());

    for (int i = 0; i < 14; i++)
        {
            if (v[i] == maxLength) maxLength++;
        }

    cout << maxLength;
}