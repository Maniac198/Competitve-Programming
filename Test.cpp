#include <bits/stdc++.h>

using namespace std;

int minMoves(int N, int M, vector<vector<int>>& X) {

    vector<vector<bool>> visited(N + 1, vector<bool>(M + 1, false));
    vector<vector<int>> min_moves(N + 1, vector<int>(M + 1,0));
    queue<pair<pair<int, int>, int>> q;  // {{i, j}, moves}

    // Starting cell is visited with 0 moves
    visited[0][0] = true;
    q.push({{0, 0}, 0});

    // Define valid moves
    vector<pair<int, int>> directions = {{1, 0}, {0, 1}};

    while (!q.empty()) {
        int i = q.front().first.first;
        int j = q.front().first.second;
        int moves = q.front().second;
        q.pop();

        // Check if reached destination
        if (i == N && j == M) {
            return moves;
        }

        // Explore valid moves
        for (auto& d : directions) {
            int ni = i + d.first * X[i][j];
            int nj = j + d.second * X[i][j];

            // Check if new cell is within bounds and not visited
            if (ni >= 1 && ni <= N && nj >= 1 && nj <= M && !visited[ni][nj]) {
                visited[ni][nj] = true;
                min_moves[ni][nj] = moves + 1;
                q.push({{ni, nj}, moves + 1});
            }
        }
    }

    // If destination is unreachable
    return -1;

}

int main() {
    int N = 5;
    int M = 5;
    vector<vector<int>> X = {
        {2, 2, 1, 1, 2},
        {1, 1, 2, 1, 1},
        {2, 1, 1, 1, 2},
        {1, 1, 1, 2, 2},
        {2, 1, 1, 1, 1}
    };

    cout << "Minimum number of moves: " << minMoves(N, M, X) << endl;

    return 0;
}
