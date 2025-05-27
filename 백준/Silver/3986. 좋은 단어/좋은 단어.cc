#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N; cin >> N;
    int count = 0;
    for (int i=0; i<N; i++)
        {
            stack<char> st;
            string str; cin >> str;
            for (char c : str)
                {
                    if (!st.empty() && st.top() == c) st.pop();
                    else st.push(c);
                }
            if (st.empty()) count++;
        }
    cout << count;
}