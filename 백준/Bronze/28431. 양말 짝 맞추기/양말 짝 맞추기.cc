#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(5);
    for (int i=0; i<5; i++) cin >> v[i];
    for (int i=0; i<5; i++)
        {
            if (count(v.begin(), v.end(), v[i]) % 2 != 0) 
            {
                cout << v[i];
                break;
            }
        }
}