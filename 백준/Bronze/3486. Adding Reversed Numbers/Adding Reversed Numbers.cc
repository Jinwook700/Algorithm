#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ZeroDelete(string str)
    {
        while (str[str.length()-1] == '0')
                {
                    int c = stoi(str) / 10;
                    str = to_string(c);
                }
        return str;
    }

int main() 
{
    int T; cin >> T;
    for (int i=0; i<T; i++)
        {
            int first, second; cin >> first >> second;
            string a, b; 
            a = to_string(first);
            b = to_string(second);
            
            string A = ZeroDelete(a);
            string B = ZeroDelete(b);

            int Alpha = 0;
            int Beta = 0;
            for (int j=0; j<(int)A.length(); j++) Alpha +=  (A[A.length() - j - 1] - '0') * pow(10, (A.length() - j - 1));
            for (int k=0; k<(int)B.length(); k++) Beta += (B[B.length() - k - 1] - '0') * pow(10, (B.length() - k - 1));
            
            int sum = Alpha + Beta;
            string C = ZeroDelete(to_string(sum));

            int answer = 0;
            for (int l=0; l<(int)C.length(); l++) answer += (C[C.length() - l - 1] - '0') * pow(10, (C.length() - l - 1));
            cout << answer << "\n";
        }
}