class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int st = 0;
        int end = n-1;
        int pos = n-1;
        while(st <= end) {
            if(abs(nums[st]) > abs(nums[end])) {
                ans[pos] = nums[st] * nums[st];
                st++;
            } else {
                ans[pos] = nums[end] * nums[end];
                end--;
            }
            pos--;
        }
        return ans;
    }
};