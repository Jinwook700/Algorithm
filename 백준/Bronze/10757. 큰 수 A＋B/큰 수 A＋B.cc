#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;
    vector<char> v1(a.begin(), a.end());
    vector<char> v2(b.begin(), b.end());
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    int large_size = 0;
    if (v1.size() > v2.size()) large_size = v1.size();
    else large_size = v2.size();
    vector<char> v3;
    bool flag = false;
    int i = 0;
    while(true)
        {
            int num = 0;
            if (flag) num += 1;
            flag = false;
            if (!v1.empty())
            {
                num += v1[0] - '0';
                v1.erase(v1.begin());
            }
            if (!v2.empty()) 
            {
                num += v2[0] - '0';
                v2.erase(v2.begin());
            }
            if (num > 9) flag = true;
            v3.push_back((num%10) + '0');
            i++;
            if (i == large_size && flag) v3.push_back('1');
            if (i == large_size) break;
        }
    reverse(v3.begin(), v3.end());
    for (int j=0; j<v3.size(); j++) cout << v3[j];
}