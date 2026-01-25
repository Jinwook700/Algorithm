#include <iostream>
using namespace std;

int A, B, C ,D;
bool result = true;

void cnt (const char ch)
{
    if (ch == 'a') A--;
    if (ch == 'b') B--;
    if (ch == 'c') C--;
    if (ch == 'd') D--;

    if (A < 0 || B < 0 || C < 0 || D < 0) result = false;
}

int main() {
    int N; cin >> N;
    cin >> A >> B >> C >> D;
    string S; cin >> S;
    
    if (S.front() != 'a' || S.back() != 'a') result = false;

    char prevChar = S.front();
    cnt(prevChar);

    for (int i = 1; i < S.size(); i++)
        {
            cnt(S[i]);
            if (prevChar == S[i]) result = false;
            prevChar = S[i];
        }

    cout << (result ? "Yes" : "No");
}