#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string first = to_string(a) + to_string(b);
    string second = to_string(b) + to_string(a);
    int large = max(stoi(first), stoi(second));
    answer += large;
    return answer;
}