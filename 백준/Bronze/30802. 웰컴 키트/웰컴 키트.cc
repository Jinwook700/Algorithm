#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v(6);
    for (int i=0; i<6; i++) cin >> v[i];
    int T, P; cin >> T >> P;
    int a = 0; int b = 0; int c = 0;
    for (int j=0; j<6; j++)
        {
            if (v[j]%T == 0) a +=v[j]/T;
            else a += v[j]/T + 1;
        }
    cout << a << "\n" << N/P << " " << N%P;
}