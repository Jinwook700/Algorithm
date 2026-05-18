#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numlog) {
    string answer = "";
    for (int i = 1; i < numlog.size(); i++)
    {
        if (numlog[i] - numlog[i - 1] == 1) answer += 'w';
        else if (numlog[i] - numlog[i - 1] == -1) answer += 's';
        else if (numlog[i] - numlog[i - 1] == 10) answer += 'd';
        else answer += 'a';
    }
    return answer;
}