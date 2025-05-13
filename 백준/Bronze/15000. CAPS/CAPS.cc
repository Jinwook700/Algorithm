#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n; cin >> n;
    string answer = "";
    
    for (char c : n) answer += toupper(c);
    cout << answer;
}