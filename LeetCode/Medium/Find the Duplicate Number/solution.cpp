class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = 1;
        while(st < n) {
            if(nums[st] == nums[end]) {
                return nums[end];
            }
            st++;
            end++;
        }
        return -1;
    }
};