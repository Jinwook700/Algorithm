#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = -1;
    vector<pair<int, int>> v(1000);
    for (int i = 0; i < 1000; i++) v[i].first = i;
    for (int i = 0; i < array.size(); i++) v[array[i]].second++;
    sort(v.begin(), v.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
        return a.second > b.second;
    });
    if (array.size() == 1) answer = array[0];
    else if (v[0].second == v[1].second) answer = -1;
    else answer = v[0].first;
    return answer;
}