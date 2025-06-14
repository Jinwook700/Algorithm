#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for (int i=0; i<t.length() - p.length() + 1; i++)
    {
        string str = t.substr(i, p.length());
        long long first = stoll(str);
        long long second = stoll(p);
        if (first <= second) answer++;
    }
    return answer;
}