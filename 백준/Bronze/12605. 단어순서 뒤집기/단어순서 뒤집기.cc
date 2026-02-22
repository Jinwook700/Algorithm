#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    cin.ignore();
    
    vector<string> v;
    
    for (int i = 0; i < N; i++)
        {
            v.clear();
            string str; getline(cin, str);

            string temp = "";
            for (char c : str)
                {
                    if (c == ' ') 
                    {
                        v.push_back(temp);
                        temp = "";
                    }
                    else temp += c;
                }
            v.push_back(temp);
            
            reverse(v.begin(), v.end());

            cout << "Case #" << i + 1 << ": ";
            for (int j = 0; j < v.size(); j++)
                cout << v[j] << " ";
            cout << "\n";
        }

    return 0;
}