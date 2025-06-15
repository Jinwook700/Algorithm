#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str = to_string(a) + to_string(b);
    if (stoi(str) >= 2*a*b) answer += stoi(str);
    else answer += 2*a*b;
    return answer;
}