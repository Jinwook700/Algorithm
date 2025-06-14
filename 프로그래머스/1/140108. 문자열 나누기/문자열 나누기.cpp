#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp = 0;
    int length = s.length();
    while (temp < length)
    {
        char ch = s[temp];
        int count1 = 0;
        int count2 = 0;
        while (true)
        {
            if (ch == s[temp])
            {
                count1++;
            }
            else
            {
                count2++;
            }
            temp++;
            if (count1 == count2)
            {
                break;
            }
            else if (temp == length)
            {
                break;
            }
        }
        answer++;
    }
    return answer;
}