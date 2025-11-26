#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    int size = phone_book.size();
    string beforeNum = phone_book[0];
    for (int i=0; i<size; i++)
    {
        if (phone_book[i].substr(0, beforeNum.size()) != beforeNum || i == 0)
        {
            beforeNum = phone_book[i];
            continue;
        }
        if (phone_book[i].substr(0, beforeNum.size()) == beforeNum) answer = false;
    }
    
    
    return answer;
}