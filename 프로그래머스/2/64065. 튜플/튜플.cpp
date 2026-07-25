#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<int, int> un;
    
    vector<int> v;
    bool start = false;
    string str = "";
    for (char c : s)
    {
        if (c == '{') start = true;
        else if (!start && c == '}') break;
        else if (start)
        {
            if (c - '0' >= 0 && c - '0' <= 9)
                str += c;
            else if (c == ',' || c == '}')
            {
                v.push_back(stoi(str));
                str = "";
                if (c == '}') 
                {
                    start = false;
                    int size = v.size();
                    for (int i = 0; i < size; i++)
                    {
                        if (un.count(v[i])) un[v[i]] = min(size, un[v[i]]); 
                        else un[v[i]] = size;
                    }
                    v.clear();
                }
            }
        }
    }
    
    answer.resize(un.size());
    
    for (auto it = un.begin(); it != un.end(); ++it)
    {
        answer[it->second - 1] = it->first;
    }
    return answer;
}