#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<char> v1(X.begin(), X.end());
    vector<char> v2(Y.begin(), Y.end());
    vector<char> v3;
    sort(v1.begin(), v1.end(), greater<char>());
    sort(v2.begin(), v2.end(), greater<char>());
    
    int first = 0;
    int second = 0;
    while (first != v1.size() && second != v2.size())
    {
        if (v1[first] == v2[second]) 
        {
            v3.push_back(v1[first]);
            first++;
            second++;
        }
        else if (v1[first] - '0' > v2[second] - '0')
        {
            first++;
        }
        else if (v1[first] - '0' < v2[second] - '0')
        {
            second++;
        }
    }
    if (v3.empty()) answer += "-1";
    else if (v3.front() == '0') answer += '0';
    else
    {
        for (int i=0; i<v3.size(); i++) answer += v3[i];
    }
    
    return answer;
}