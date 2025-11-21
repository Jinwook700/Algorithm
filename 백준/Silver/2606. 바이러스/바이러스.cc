#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;
int virused = -1;

void dfs(int currentNode)
{
    visited[currentNode] = 1;
    virused++;

    for (int nextNode : adj[currentNode])
        {
            if (visited[nextNode] == 0) dfs(nextNode);
        }
}

int main()
{
    int N; cin >> N;
    adj.resize(N+1);
    visited.resize(N+1, 0);
    
    int M; cin >> M;
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
    dfs(1);
    cout << virused;
}