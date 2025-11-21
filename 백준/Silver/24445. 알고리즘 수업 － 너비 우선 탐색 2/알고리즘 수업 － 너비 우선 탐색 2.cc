#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;
int visited_oreder = 1;

void bfs(int currentNode)
{
    queue<int> q;
    q.push(currentNode);
    visited[currentNode] = visited_oreder++;

    while(!q.empty())
        {
            int u = q.front();
            q.pop();

            for (int v : adj[u])
                {
                    if (visited[v] == 0) 
                    {
                        q.push(v);
                        visited[v] = visited_oreder++;
                    }
                }
        }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, R;
    cin >> N >> M >> R;

    adj.resize(N + 1);
    visited.resize(N + 1 , 0);

    for (int i=0; i<M; i++)
        {
            int a, b; cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    for (int i=1; i<=N; i++)
        {
            sort(adj[i].begin(), adj[i].end(), greater<int>());
        }
    bfs(R);
    for (int i=1; i<N+1; i++) cout << visited[i] << "\n";
    
}