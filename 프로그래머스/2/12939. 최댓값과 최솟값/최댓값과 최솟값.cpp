#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    bool flag = false;
    string str = "";
    int num;
    for (char c : s)
    {
        if (c == '-')
        {
            flag = true;
            continue;
        }
        else if (c == ' ')
        {
            num = stoi(str);
            if (flag) v.push_back(-1*num);
            else v.push_back(num);
            flag = false;
            str = "";
        }
        else
        {
            str += c;
        }
    }
    num = stoi(str);
    if (flag) v.push_back(-1*num);
    else v.push_back(num);
    
    sort(v.begin(), v.end());
    answer += to_string(v.front());
    answer += ' ';
    answer += to_string(v.back());
    return answer;
}