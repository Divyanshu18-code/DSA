class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=0; i<n; i++) {    //total sum 
            totalSum += nums[i];
        }
        for(int i=1; i<n; i++) {   //prefix sum claculate
            prefix[i] = prefix[i-1] + nums[i];
        }
        for(int i=0; i<n; i++) {    //left and right sum check 
            int leftSum = (i == 0) ? 0 : prefix[i-1];
            int rightSum = totalSum - prefix[i];
            if(leftSum == rightSum) {
                return i;
            } 
        }
        return -1;
    }
};