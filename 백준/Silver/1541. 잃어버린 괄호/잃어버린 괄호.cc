#include <iostream>
#include <vector>
using namespace std;

void function(vector<int>& v, string& str)
{
    v.push_back(stoi(str));
    str = "";
}

int main()
{
    string str; cin >> str;
    vector<int> vMinus;
    vector<int> vPlus;
    string num = "";
    bool Plus = true;
    for (char c : str)
    {
        if (c == '-' && Plus)
        {
            Plus = false;
            function(vPlus, num);
        }
        else if (c == '-' && !Plus) function(vMinus, num);
        else if (c == '+' && Plus) function(vPlus, num);
        else if (c == '+' && !Plus) function(vMinus, num);
        else num += c;
    }
    if (Plus) vPlus.push_back(stoi(num));
    else vMinus.push_back(stoi(num));

    int answer = 0;
    for (int i=0; i<vPlus.size(); i++) answer += vPlus[i];
    for (int i=0; i<vMinus.size(); i++) answer -= vMinus[i];
    cout << answer;

}