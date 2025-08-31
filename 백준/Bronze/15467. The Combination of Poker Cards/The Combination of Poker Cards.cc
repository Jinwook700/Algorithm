#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--)
        {
            vector<int> v(13, 0);
            for (int i=0; i<6; i++)
                {
                    int num; cin >> num;
                    v[num-1]++;
                }
            sort(v.begin(), v.end(), greater<>());
            string type = "";
            if (v[0] == 1) type = "single";
            else if (v[0] == 2 && v[1] == 1) type = "one pair";
            else if (v[0] == 2 && v[1] == 2 && v[2] == 1) type = "two pairs";
            else if (v[0] == 2 && v[1] == 2 && v[2] == 2) type = "three pairs";
            else if (v[0] == 3 && v[1] == 1) type = "one triple";
            else if (v[0] == 3 && v[1] == 3) type = "two triples";
            else if (v[0] == 4 && v[1] == 1) type = "tiki";
            else if (v[0] == 4 && v[1] == 2) type = "tiki pair";
            else if (v[0] == 3 && v[1] == 2) type = "full house";
            cout << type << "\n";
        }
}