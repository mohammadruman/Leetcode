class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
          for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != grid[i+1][j])
                    return false;
            }
        }
         for (int i = 0; i < m; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (grid[i][j] == grid[i][j+1])
                    return false;
            }
        }
        return true;
    }
};