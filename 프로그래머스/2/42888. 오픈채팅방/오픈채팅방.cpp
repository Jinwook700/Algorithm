#include <string>
#include <vector>
#include <map>
#include <format>

using namespace std;

vector<string> split(string str)
{
    vector<string> Vec;
    string s = "";
    for (char c : str)
    {
        if (c == ' ')
        {
            Vec.push_back(s);
            s = "";
        }
        else s += c;
    }
    Vec.push_back(s);
    return Vec;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> m;
    for (int i = 0; i < record.size(); i++)
    {
        vector<string> v = split(record[i]);
        if (v[0] == "Enter" || v[0] == "Change") m[v[1]] = v[2];
    }
    for (int i = 0; i < record.size(); i++)
    {
        if (record[i].substr(0, 5) == "Enter") 
            answer.push_back(format("{}님이 들어왔습니다.", m[split(record[i])[1]]));
        else if (record[i].substr(0, 5) == "Leave") 
            answer.push_back(format("{}님이 나갔습니다.", m[split(record[i])[1]]));
    }
    return answer;
}