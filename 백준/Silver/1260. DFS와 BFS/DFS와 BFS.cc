#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<vector<int>> adj2;
vector<int> visited_dps;
vector<int> visited_bfs;
int visitedNum_dps = 1;
int visitedNum_bfs = 1;

void dfs(int currentNode)
{
    visited_dps[currentNode] = visitedNum_dps++;
    cout << currentNode << " ";

    for (int nextNode : adj[currentNode])
        {
            if (visited_dps[nextNode] == 0)
            {
                dfs(nextNode);
            }
        }
}

void bfs(int currentNode)
{
    queue<int> q;
    q.push(currentNode);
    cout << currentNode << " ";
    visited_bfs[currentNode] = visitedNum_bfs++;

    while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int nextNode : adj2[u])
                {
                    if (visited_bfs[nextNode] == 0)
                    {
                        q.push(nextNode);
                        visited_bfs[nextNode] = visitedNum_bfs++;
                        cout << nextNode << " ";
                    }
                }
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M, V; cin >> N >> M >> V;

    adj.resize(N+1);
    visited_dps.resize(N+1, 0);
    visited_bfs.resize(N+1, 0);
    for (int i=0; i<M; i++)
        {
            int a, b; cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    for (int i=1; i<=N; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
    adj2 = adj;
    dfs(V);
    cout << "\n";
    bfs(V);
}