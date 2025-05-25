#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    for (int i=0; i<N; i++)
        {
            string name; cin >> name;
            for (char c : name)
                {
                    if (c == 'S')
                    {
                        cout << name;
                        break;
                    }
                }
        }
}