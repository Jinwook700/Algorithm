#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    stack<int> st;
    vector<char> result;
    int maxValue = 0;
    bool flag = true;
    
    for (int i=0; i<n; i++)
        {
            int num; cin >> num;
            if (st.empty() || num > st.top())
            {
                int j = maxValue + 1;
                if (j == n + 1) flag = false;
                for (; j<=num; j++)
                    {
                        st.push(j);
                        result.push_back('+');
                    }
            }
            if (num != st.top()) flag = false;
            st.pop();
            result.push_back('-');
            maxValue = max(num, maxValue);
        }
    if (flag) for (int i=0; i<result.size(); i++) cout << result[i] << "\n";
    else cout << "NO";
}