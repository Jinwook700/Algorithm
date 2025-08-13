#include <iostream>
#include <vector>
using namespace std;

bool printVect(vector<int> v)
{
    int size = v.size();
    cout << "[";
    for (int i=0; i<size; i++)
        {
            cout << v[i];
            if (i != size - 1) cout << ", ";
        }
    cout << "]";
    return 0;
}

int main()
{
    int N; cin >> N;
    while(N--)
        {
            int T; cin >> T;
            bool flag = true;
            vector<int> v(T);
            for (int i=0; i<T; i++) cin >> v[i];
            if (T >= 3)
            {
                int vSize = v.size();
                int gap = v[1] - v[0];
                for (int i=0; i<vSize - 1; i++)
                    {
                        if (v[i+1] - v[i] != gap) flag = false;
                    }
            }
            else if (T == 1) flag = false;
            if (flag)
            {
                cout << "The next 5 numbers after ";
                printVect(v);
                cout << " are: ";
                vector<int> v1(5);
                for (int i=0; i<5; i++)
                    {
                        v1[i] = v[T-1] + (v[1] - v[0]) *(i+1);
                    }
                printVect(v1);
                cout << "\n";
            }
            else
            {
                cout << "The sequence ";
                printVect(v);
                cout << " is not an arithmetic sequence." << "\n";
            }
        }
}