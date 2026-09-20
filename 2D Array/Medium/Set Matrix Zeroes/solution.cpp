class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> markerow(n, 0);
        vector<int> markecol(m, 0);
        //mark row and col
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 0) {
                    markerow[i] = 1;
                    markecol[j] = 1;
                }
            }
        }
        //marke row and col to zero
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(markerow[i] == 1 || markecol[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }

    }
};