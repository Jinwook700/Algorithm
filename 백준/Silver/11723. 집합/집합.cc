#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N; cin >> N;
    set<int> s;
    set<int> s2;
    for (int i=0; i<20; i++) s2.insert(i+1);
    
    while(N--)
        {
            string str; cin >> str;
            int num;
            if (str == "add")
            {
                cin >> num;
                s.insert(num);
            }
            else if (str == "remove")
            {
                cin >> num;
                s.erase(num);
            }
            else if (str == "check")
            {
                cin >> num;
                cout << s.count(num) << "\n";
            }
            else if (str == "toggle")
            {
                cin >> num;
                if (s.count(num) == 1) s.erase(num);
                else s.insert(num);
            }
            else if (str == "all") s = s2;
            else if (str == "empty") s.clear();
        }
}