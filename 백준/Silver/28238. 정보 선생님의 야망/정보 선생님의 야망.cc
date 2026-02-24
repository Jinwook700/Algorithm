#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec (vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    vector<int> v(5, 0);
    vector<int> result(10, 0);

    for (int i = 0; i < N; i++)
        {
            v.clear();
            for (int j = 0; j < 5; j++)
                {
                    cin >> v[j];
                }
            if (v[0] == 1 && v[1] == 1) result[0] += 1;
            if (v[0] == 1 && v[2] == 1) result[1] += 1;
            if (v[0] == 1 && v[3] == 1) result[2] += 1;
            if (v[0] == 1 && v[4] == 1) result[3] += 1;
            if (v[1] == 1 && v[2] == 1) result[4] += 1;
            if (v[1] == 1 && v[3] == 1) result[5] += 1;
            if (v[1] == 1 && v[4] == 1) result[6] += 1;
            if (v[2] == 1 && v[3] == 1) result[7] += 1;
            if (v[2] == 1 && v[4] == 1) result[8] += 1;
            if (v[3] == 1 && v[4] == 1) result[9] += 1;
        }

    int maxValue = *max_element(result.begin(), result.end());
    cout << maxValue << "\n";

    vector<int> printV(5, 0);
    if (result[0] == maxValue) printV[0] += 1, printV[1] += 1;
    else if (result[1] == maxValue) printV[0] += 1, printV[2] += 1;
    else if (result[2] == maxValue) printV[0] += 1, printV[3] += 1;
    else if (result[3] == maxValue) printV[0] += 1, printV[4] += 1;
    else if (result[4] == maxValue) printV[1] += 1, printV[2] += 1;
    else if (result[5] == maxValue) printV[1] += 1, printV[3] += 1;
    else if (result[6] == maxValue) printV[1] += 1, printV[4] += 1;
    else if (result[7] == maxValue) printV[2] += 1, printV[3] += 1;
    else if (result[8] == maxValue) printV[2] += 1, printV[4] += 1;
    else if (result[9] == maxValue) printV[3] += 1, printV[4] += 1;

    printVec(printV);

}