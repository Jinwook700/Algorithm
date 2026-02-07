#include <iostream>
using namespace std;

int main() {
    string str; 
    getline(cin, str);
    int size = str.size();

    int smileCnt = 0;
    int sadCnt = 0;
    
    for (int i = 0; i < size; i++)
        {
            if (i < size - 2 && str[i] == ':' && str[i+1] == '-')
            {
                if (str[i+2] == ')') smileCnt++;
                if (str[i+2] == '(') sadCnt++;
            }
        }
    if (smileCnt == 0 && sadCnt == 0) cout << "none";
    else if (smileCnt == sadCnt) cout << "unsure";
    else cout << (smileCnt > sadCnt ? "happy" : "sad");
}