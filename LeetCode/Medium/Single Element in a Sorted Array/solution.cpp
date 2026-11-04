class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) {
            return nums[0];
        }
        if(nums[0] != nums[1]) {  //first element
            return nums[0];
        }
        for(int i=1; i<n; i++) {
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) {    //middle element
                return nums[i];  
            }
        }
        if(nums[n-1] != nums[n-2]) {   //last element
            return nums[n-1];
        }
        return -1;
    }
};