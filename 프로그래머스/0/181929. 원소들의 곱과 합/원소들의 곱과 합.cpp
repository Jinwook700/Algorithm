#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int multi = 1;
    int square = 0;
    for (int x : num_list)
    {
        multi *= x;
        square += x;
    }
    
    answer = (multi < square * square) ? 1 : 0;
    
    return answer;
}