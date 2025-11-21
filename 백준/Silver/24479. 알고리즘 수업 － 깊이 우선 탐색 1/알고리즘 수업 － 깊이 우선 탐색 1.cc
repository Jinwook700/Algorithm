#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;
int visitied_order = 1;

void dfs(int currentNode)
{
    visited[currentNode] = visitied_order++;

    for (int nextNode : adj[currentNode])
        {
            if (visited[nextNode] == 0) dfs(nextNode);
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M, R; cin >> N >> M >> R;

    adj.resize(N+1);
    visited.resize(N + 1, 0);

    for (int i=0; i<M; i++)
        {
            int a, b; cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    for (int i=1; i<=N; i++)
        {
            if (!adj[i].empty()) sort(adj[i].begin(), adj[i].end());
        }

    dfs(R);

    for (int i=1; i<=N; i++) cout << visited[i] << "\n";
}