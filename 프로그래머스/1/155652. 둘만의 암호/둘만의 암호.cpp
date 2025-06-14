#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for (char c : s)
    {
        for (int i=0; i<index; i++)
        {
            c += 1;
            if (c - 'a' > 25) c -= 26;
        
            while (true)
            {
                if (skip.find(c) != string::npos) 
                {
                    c += 1;
                    if (c - 'a' > 25) c -= 26;
                }
                else break;
            }
        }
        
        string s(1, c);
        answer += s;
    }
    return answer;
}