class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> result(n, vector<int>(m));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int sum = 0; 
                int count = 0;
                for(int row=i-1; row<=i+1; row++) {
                    for(int col=j-1; col<=j+1; col++) {
                        if(row >= 0 && row < n && col >= 0 && col < m) {
                            sum += img[row][col];
                            count++;
                            result[i][j] = sum / count;
                        }
                    }
                }
            }
        }
        return result;
    }
};