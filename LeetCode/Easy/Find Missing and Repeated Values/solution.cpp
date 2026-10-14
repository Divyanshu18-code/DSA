class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeated = -1;
        int missing = -1;
        for(int i=1; i<=n*n; i++) {
            int count = 0;
            for(int row=0; row<n; row++) {
                for(int col=0; col<n; col++) {
                    if(grid[row][col] == i) {
                        count++;
                    } 
                }
            }
            if(count == 2) {
                repeated = i;
            } else if(count == 0) {
                missing = i;
            }
        }
        return {repeated, missing};
    }
};