#include <iostream>
#include <vector>
using namespace std;

vector<int> smallVec (vector<int> v)
{   
    int size = v.size();
    if (size == 1) return v;
    
    vector<int> newV;

    for (int i = 0; i < size; i++)
        {
            if (i % 2 == 1) newV.push_back(v[i]);
        }

    return smallVec(newV);
}

int main() {
    int N; cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) v[i] = i + 1;

    cout << smallVec(v)[0];
}