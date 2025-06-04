#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a,b,c; cin >> a >> b >> c;
    vector<char> v{a[0], b[0], c[0]};
    bool flag = true;
    if (find(v.begin(), v.end(), 'l') == v.end()) flag = false;
    if (find(v.begin(), v.end(), 'k') == v.end()) flag = false;
    if (find(v.begin(), v.end(), 'p') == v.end()) flag = false;
    if (flag) cout << "GLOBAL";
    else cout << "PONIX";
}
