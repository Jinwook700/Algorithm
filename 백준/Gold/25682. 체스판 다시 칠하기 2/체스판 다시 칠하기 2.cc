#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, K;
vector<vector<char>> v;
vector<vector<int>> dpBlack;
vector<vector<int>> dpWhite;


int main() {
    cin >> N >> M >> K;
    v.assign(N, vector<char>(M));
    dpBlack.assign(N, vector<int>(M, 0));
    dpWhite.assign(N, vector<int>(M, 0));
    
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++)
            cin >> v[i][j];

    //첫째칸 B로 시작
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    int cost = 0;
                    if (v[i][j] == 'W' && (i + j) % 2 == 0) cost = 1;
                    if (v[i][j] == 'B' && (i + j) % 2 == 1) cost = 1;

                    dpBlack[i][j] = cost;
                    if (i > 0) dpBlack[i][j] += dpBlack[i-1][j];
                    if (j > 0) dpBlack[i][j] += dpBlack[i][j-1];
                    if (i > 0 && j > 0) dpBlack[i][j] -= dpBlack[i-1][j-1];
                }
        }

    //첫째칸 W로 시작
    for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
                {
                    int cost = 0;
                    if (v[i][j] == 'B' && (i + j) % 2 == 0) cost = 1;
                    if (v[i][j] == 'W' && (i + j) % 2 == 1) cost = 1;

                    dpWhite[i][j] = cost;
                    if (i > 0) dpWhite[i][j] += dpWhite[i-1][j];
                    if (j > 0) dpWhite[i][j] += dpWhite[i][j-1];
                    if (i > 0 && j > 0) dpWhite[i][j] -= dpWhite[i-1][j-1];
                }
        }

    int result = N*M;
    for (int i=K-1; i<N; i++)
        {
            for (int j=K-1; j<M; j++)
                {
                    int prefixSum1 = dpWhite[i][j];
                    if (i != K-1) prefixSum1 -= dpWhite[i-K][j];
                    if (j != K-1) prefixSum1 -= dpWhite[i][j-K];
                    if (i != K-1 && j != K-1) prefixSum1 += dpWhite[i-K][j-K];

                    int prefixSum2 = dpBlack[i][j];
                    if (i != K-1) prefixSum2 -= dpBlack[i-K][j];
                    if (j != K-1) prefixSum2 -= dpBlack[i][j-K];
                    if (i != K-1 && j != K-1) prefixSum2 += dpBlack[i-K][j-K];

                    result = min({result, prefixSum1, prefixSum2});
                }
        }
    cout << result;
}