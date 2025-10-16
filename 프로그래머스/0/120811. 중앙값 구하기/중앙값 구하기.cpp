#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int size = array.size();
    sort(array.begin(), array.end());
    answer = array[(size-1)/2];
    return answer;
}