#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 2 == 1)
    {
        for (int i=1; i<=n; i += 2) answer += i;
    }
    else
    {
        for (int j = 2; j <= n; j += 2) answer += j*j;
    }
    return answer;
}