#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v;
    int result = 0;
    
    for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            if (v.empty() || num - 1 == v.back())
            {
                v.push_back(num);
            }
            else
            {
                result += v[0];
                v.clear();
                v.push_back(num);
            }
        }
    cout << result + v[0];
}