#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    long long jinjuP = 1001;
    int result = 0;
    vector<int> v(1001, 0);
    while(N--)
        {
            string name; long long price;
            cin >> name >> price;
            if (price > 1000) result++;
            else v[price]++;
            if (name == "jinju")
            {
                jinjuP = price;
            }
        }
    
    for (int i=0; i<1001; i++)
        {
            if (i > jinjuP) result += v[i];
        }
    cout << jinjuP << "\n" << result;
}