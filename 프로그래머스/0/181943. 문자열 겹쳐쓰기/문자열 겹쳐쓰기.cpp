#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    for (int i=0; i<s; i++)
    {
        answer += my_string[i];
    }
    for (int j=0; j<overwrite_string.length(); j++)
    {
        answer += overwrite_string[j];
    }
    for (int k = s + overwrite_string.length(); k<my_string.length(); k++)
    {
        answer += my_string[k];
    }
    return answer;
}