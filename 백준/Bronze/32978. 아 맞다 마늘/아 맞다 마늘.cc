#include <iostream>
#include <set>
using namespace std;

int main() {
    int N; cin >> N;
    set<string> s;
    for (int i = 0; i < N; i++)
        {
            string str; cin >> str;
            s.insert(str);
        }

    for (int i = 0; i < N - 1; i++)
        {
            string str; cin >> str;
            s.erase(str);
        }

    set<string>::iterator it = s.begin();
    cout << *it;
}