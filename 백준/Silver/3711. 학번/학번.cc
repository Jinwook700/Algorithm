#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
        {
            int G; cin >> G;
            vector<int> v(G);
            for (int i=0; i<G; i++) cin >> v[i];

            int m = 1;
            while (true)
                {
                    set<int> s;
                    for (int i=0; i<G; i++)
                        {
                            s.insert(v[i]%m);
                        }
                    if (s.size() == G) break;
                    m++;
                }
            cout << m << "\n";
        }
}