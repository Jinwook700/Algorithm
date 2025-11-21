#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
int cnt = 0;
int resultCnt = 0;
vector<int> result;
vector<vector<int>> adj;
vector<vector<bool>> visited;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int currentx, int currenty)
{
    queue<pair<int, int>> q;
    q.push({currentx, currenty});
    visited[currentx][currenty] = true;
    cnt++;

    while(!q.empty())
        {
            int u = q.front().first;
            int v = q.front().second;
            q.pop();

            for (int i=0; i<4; i++)
                {
                    int nx = u + dx[i];
                    int ny = v + dy[i];

                    if (0 <= nx && 0 <= ny && nx < N && ny < N)
                    {
                        if (visited[nx][ny] == false && adj[nx][ny] == 1)
                        {
                            q.push({nx, ny});
                            visited[nx][ny] = true;
                            cnt++;
                        }
                    }
                }
        }
}

int main()
{
    cin >> N;
    adj.resize(N);
    visited.resize(N);
    for (int i=0; i<N; i++) 
        for (int j=0; j<N; j++) visited[i].push_back(false);
    for (int i=0; i<N; i++)
        {
            string str; cin >> str;
            for (char c : str) adj[i].push_back(c - '0');
        }
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
                {
                    if (visited[i][j] == false && adj[i][j] == 1)
                    {
                        cnt = 0;
                        bfs(i, j);
                        result.push_back(cnt);
                        resultCnt++;
                    }
                }
        }
    
    sort(result.begin(), result.end());
    cout << resultCnt << "\n";
    for (int i=0; i<result.size(); i++) cout << result[i] << "\n";
}