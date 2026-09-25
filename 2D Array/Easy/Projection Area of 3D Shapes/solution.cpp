class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            int rowMax = 0;
            for(int j=0; j<n; j++) {
                
                if(grid[i][j] > 0) {
                    ans += 1;
                }
                if(grid[i][j] > rowMax) {
                    rowMax = grid[i][j];
                }
            }
            ans += rowMax;
        }
        for(int j=0; j<n; j++) {
            int colMax = 0;
            for(int i=0; i<n; i++) {
                if(grid[i][j] > colMax) {
                    colMax = grid[i][j];
                }
            }
            ans += colMax;
        }
        return ans;
    }
};