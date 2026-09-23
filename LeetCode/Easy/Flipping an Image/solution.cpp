class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0; i<n; i++) {
            int start = 0;
            int end = n-1;
            while(start <= end) {
                swap(image[i][start], image[i][end]); //reversed 
                if(start == end) {
                    image[i][start] = 1-image[i][start];
                } else {
                    image[i][start] = 1-image[i][start];  //invert
                    image[i][end] = 1-image[i][end];
                }
                start++;
                end--;
            }
        }
        return image;
    }
};