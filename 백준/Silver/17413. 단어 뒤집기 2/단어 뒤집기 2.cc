#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    deque<char> tag;
    deque<char> word;
    vector<int> order;
    string s; getline(cin, s);
    int i = 0;
    while(true)
        {
            if (s[i] == '<')
            {
                tag.push_back(s[i]);
                order.push_back(0);
                i++;
                while(s[i] != '>')
                    {
                        tag.push_back(s[i]);
                        order.push_back(0);
                        i++;
                    }
                tag.push_back(s[i]);
                order.push_back(0);
                i++;
            }
            else
            {
                while(s[i] != '<')
                    {
                        word.push_back(s[i]);
                        order.push_back(1);
                        i++;
                        if (i == s.length()) break;
                    }
            }
            if (i == s.length()) break;
        }

        string str = "";
        for (int j=0; j<order.size(); j++)
            {
                if (order[j] == 0) 
                {
                    reverse(str.begin(), str.end());
                    cout << str;
                    str = "";
                    cout << tag.front();
                    tag.pop_front();
                }
                else if (order[j] == 1 && word.front() != ' ')
                {
                    str += word.front();
                    word.pop_front();
                }
                else if (order[j] == 1 && word.front() == ' ')
                {
                    reverse(str.begin(), str.end());
                    cout << str;
                    str = "";
                    cout << ' ';
                    word.pop_front();
                }
                if (j == order.size() - 1) 
                {
                    reverse(str.begin(), str.end());
                    cout << str;
                }
            }
}