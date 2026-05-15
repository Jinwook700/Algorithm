#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd = "";
    string even = "";
    for (int x : num_list)
    {
        if (x % 2 == 0) even += to_string(x);
        else odd += to_string(x);
    }
    answer += stoi(odd) + stoi(even);
    return answer;
}