#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> v;
vector<int> tmp;
int count = 0;
int result = -1;

void printVec(vector<int> v1, vector<int> v2)
{
    cout << "v : {";
    for (int i=0; i<N; i++)
        {
            cout << v1[i] << ", ";
        }
    cout << "}, tmp : {";
    for (int i=0; i<N; i++)
        {
            cout << v2[i] << ", ";
        }
    cout << "}\n";
}

void merge(int p, int q, int r)
{
    int i = p, j = q + 1, t = 0;

    while (i <= q && j <= r)
        {
            if (v[i] <= v[j]) tmp[t++] = v[i++];
            else tmp[t++] = v[j++];      
        }

    while (i <= q) tmp[t++] = v[i++];
    while (j <= r) tmp[t++] = v[j++];

    i = p; t = 0;
    while (i <= r) 
        {
            v[i] = tmp[t];
            count++;
            //printVec(v, tmp);
            if (count == K) result = v[i];
            i++; t++;
        }
}

void merge_sort(int p, int r)
{
    if (p < r)
    {
        int q = (p+r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    cin >> N >> K;
    v.resize(N);
    tmp.resize(N);
    
    for (int i=0; i<N; i++) cin >> v[i];
    
    merge_sort(0, N-1);

    cout << result;
}