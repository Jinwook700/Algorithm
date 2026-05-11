#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(num_list.begin(), num_list.end());
    int size = num_list.size();
    int a = num_list[size - 2];
    int b = num_list.back();
    if (a < b) answer.push_back(b - a);
    else answer.push_back(b * 2);
    return answer;
}