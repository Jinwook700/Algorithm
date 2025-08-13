#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    cin.ignore();
    string str; getline(cin, str);

    bool Cap = false;
    int count = 0;
    for (char c : str)
        {
            if (c == ' ')
            {
                if (Cap) count++;
                Cap = false;
            }
            else if (c == '.' || c == '?' || c == '!')
            {
                if (Cap) count++;
                Cap = false;
                cout << count << "\n";
                count = 0;
            }
            else if (Cap && 'A' <= c && c <= 'Z') Cap = false;
            else if ('a' <= c && c <= 'z') continue;
            else if ('A' <= c && c <= 'Z') Cap = true;
            else Cap = false;
        }
}