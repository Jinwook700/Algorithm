#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int> result;

void permutation (const vector<int>&vec, vector<int>& currentV, vector<bool>& isUsed)
{
    int n = vec.size();
    
    if (currentV.size() == n)
    {
        int value = v[0];
        for (int i=1; i<v.size(); i++)
            {
                if (currentV[i-1] == 0) value += v[i];
                else if (currentV[i-1] == 1) value -= v[i];
                else if (currentV[i-1] == 2) value *= v[i];
                else value /= v[i];
            }
        result.push_back(value);
        return;
    }
    for (int i=0; i<n; i++)
        {
            if (isUsed[i]) continue;
            isUsed[i] = true;
            currentV.push_back(vec[i]);
            permutation(vec, currentV, isUsed);

            currentV.pop_back();
            isUsed[i] = false;
        }
}

int main()
{
    int N; cin >> N;    
    vector<int> smile;
    vector<int> currentV;
    vector<bool> isUsed = {false, };
    for (int i=0; i<N; i++) 
        {
            int vl; cin >> vl;
            v.push_back(vl);
        }
    for (int i=0; i<4; i++) 
        {
            int num; cin >> num;
            for (int j=0; j<num; j++) smile.push_back(i);
        }
    permutation(smile, currentV, isUsed);
    sort(result.begin(), result.end());
    cout << result.back() << "\n" << result.front();
}