#include <iostream>
#include <vector>
using namespace std;

int N;
int result = 40000;
vector<vector<int>> v;

int vecSum (vector<vector<int>> v, vector<int> vec)
{
    int sum = 0;
    for (int i=0; i<vec.size(); i++)
            {
                for (int j=0; j<vec.size(); j++)
                    {
                         sum += v[vec[i]][vec[j]];
                    }
            }
    return sum;
}

void combi(int start, vector<int> p, int num)
{
    if (p.size() == num)
    {
        int index = 0;
        vector<int> a;
        vector<int> b;
        for (int i=0; i<N; i++)
            {
                if (p[index] == i )
                {
                    a.push_back(i);
                    index++;
                }
                else b.push_back(i);
            }

        int aSum = vecSum(v, a);
        int bSum = vecSum(v, b);
        result = min(abs(aSum - bSum), result);
        
        return;
    }
    for (int i=start+1; i<N; i++)
        {
            p.push_back(i);
            combi(i, p, num);
            p.pop_back();
        }
}

int main()
{
    cin >> N;
    v.assign(N, vector<int>(N));
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++) cin >> v[i][j];
        }
    vector<int> p;
    combi(-1, p, N/2);
    
    cout << result;
}