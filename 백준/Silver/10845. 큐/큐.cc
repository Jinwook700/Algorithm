#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    queue<int> que;
    int N; cin >> N;
    for (int i=0; i<N; i++) {
        string command; cin >> command;
        if (command == "push") {
            int num; cin >> num;
            que.push(num);
        }
        else if (command == "pop") {
            if (que.empty()) cout << -1 << "\n";
            else {
                cout << que.front() << "\n";
                que.pop();
            }
        }
        else if (command == "size") cout << que.size() << "\n";
        else if (command == "empty") {
            if (que.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (command == "front") {
            if (que.empty()) cout << -1 << "\n";
            else cout << que.front() << "\n";
        }
        
        else if (command == "back") {
            if (que.empty()) cout << -1 << "\n";
            else cout << que.back() << "\n";
        }
    }
}