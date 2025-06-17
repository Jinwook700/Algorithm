#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    string name;
    vector<string> v(N);
    for (int i=0; i<N; i++)
        {
            cin >> name;
            string secondName = "";
            for (char c : name)
                {
                    if (c == '.') secondName = "";
                    else secondName += c;
                }
            v[i] = secondName;
        }
    sort(v.begin(), v.end());

    string temp = v[0];
    int count = 0;
    for (int j=0; j<v.size(); j++)
        {
            if (v[j] == temp) count++;
            else
            {
                cout << v[j-1] << " " << count << "\n";
                count = 1;
            }
            temp = v[j];
        }
    if (temp == v[v.size() - 2]) cout << temp << " " << count;
    else cout << temp << " " << 1;
}