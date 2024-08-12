class Solution {
public:
    int minDays(vector<vector<int>>& grid) {
        if (!isConnected(grid)) return 0;
        int m = grid.size(), n = grid[0].size();
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    if (!isConnected(grid)) return 1;
                    grid[i][j] = 1;
                }
            }
        }
        return 2;
    }

private:
    bool isConnected(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int landCount = 0, startX = -1, startY = -1;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    ++landCount;
                    startX = i;
                    startY = j;
                }
            }
        }
        
        if (landCount == 0) return false;
        
        queue<pair<int, int>> q;
        q.push({startX, startY});
        visited[startX][startY] = true;
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int connectedLand = 0;
        
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            ++connectedLand;
            
            for (auto& dir : directions) {
                int nx = x + dir[0], ny = y + dir[1];
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        
        return connectedLand == landCount;
    }
};