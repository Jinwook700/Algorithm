#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int value = a;
    for (int i = 0; i < included.size(); i++)
    {
        value = a + i * d;
        if (included[i] == true) answer += value;
    }
    return answer;
}