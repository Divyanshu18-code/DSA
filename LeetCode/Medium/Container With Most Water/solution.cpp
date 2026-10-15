class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int st = 0;
        int end = height.size()-1;
        while(st <= end) {
            int width = end - st;
            int ht = min(height[st], height[end]);
            int area = width * ht;
            maxWater = max(maxWater, area);
            if(height[st] < height[end]) {
                st++;
            } else {
                end--;
            }
        }
        return maxWater;
    }
};