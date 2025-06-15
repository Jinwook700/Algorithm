#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    string multi = ineq + eq;
    
    bool flag = false;
    if (multi == ">!") flag = n > m;
    else if (multi == "<!") flag = n < m;
    else if (multi == ">=") flag = n >= m;
    else if (multi == "<=") flag = n <= m;
    
    if (flag) answer += 1;
    return answer;
}