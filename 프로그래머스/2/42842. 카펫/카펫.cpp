#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x = 3;
    int y = (brown - 2) / 2;
    while (true)
    {
        if ((x - 2) * (y - 2) == yellow) break;
        x++;
        y--;
    }
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}