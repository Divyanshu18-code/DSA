class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            // Find row minimum
            int min = matrix[i][0];
            int mincol = 0;
            for(int j=1; j<m; j++) {
                if(matrix[i][j] < min) {
                    min = matrix[i][j];
                    mincol = j;
                }
            }
            // Check whether min is column maximum
            bool lucky = true;
            for(int row=0; row<n; row++) {
                if(matrix[row][mincol] > min) {
                    lucky = false;
                } 
            }
            // Store lucky number
            if(lucky == true) {
                ans.push_back(min);
            }
        }
        return ans;
    }
};