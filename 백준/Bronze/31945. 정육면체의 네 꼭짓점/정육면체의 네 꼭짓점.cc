#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            int a,b,c,d; cin >> a >> b >> c >> d;
            vector<int> v{a, b, c, d};
            sort(v.begin(), v.end());
            if (v == vector<int>{0, 1, 4, 5} || v == vector<int>{4, 5, 6, 7} ||
                v == vector<int>{2, 3, 6, 7} || v == vector<int>{0, 1, 2, 3} ||
                v == vector<int>{1, 3, 5, 7} || v == vector<int>{0, 2, 4, 6}) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
}