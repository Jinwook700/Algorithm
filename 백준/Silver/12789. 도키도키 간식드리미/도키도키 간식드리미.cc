#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N; cin >> N;
    stack<int> st1;
    for (int i=0; i<N; i++) {
        int num; cin >> num;
        st1.push(num);
    }
    
    stack<int> st;
    for (int i=0; i<N; i++) {
        st.push(st1.top());
        st1.pop();
    }
    
    stack<int> goal;
    stack<int> down;
    goal.push(0);
    down.push(0);
    while(true) {
        if (st.empty()) {
            while(true) {
                if (down.top() == goal.top() + 1) {
                    goal.push(down.top());
                    down.pop();
                }
                else break;
            }
            if (goal.size() == N + 1) {
                cout << "Nice";
                break;
            }
            else {
                cout << "Sad";
                break;
            }
        }
        
        if (st.top() == goal.top() + 1) {
            goal.push(st.top());
            st.pop();
        }
        else if (down.top() == goal.top() + 1) {
            goal.push(down.top());
            down.pop();
        }
        else {
            down.push(st.top());
            st.pop();
        }
    }
    
}