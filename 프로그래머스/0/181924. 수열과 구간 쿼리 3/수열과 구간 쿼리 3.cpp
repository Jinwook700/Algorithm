#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int size = queries.size();
    int arrSize = arr.size();
    for (int i = 0; i < size; i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];
        swap(arr[a], arr[b]);
    }
    vector<int> answer(arr.begin(), arr.end());
    return answer;
}