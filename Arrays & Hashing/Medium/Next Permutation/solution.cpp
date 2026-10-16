class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for(int i=n-2; i>=0; i--) {    //find pivot
            if(nums[i] < nums[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) {
            reverse(nums.begin(), nums.end()); 
            return;
        }
        for(int i=n-1; i>pivot; i--) {    //find the right most element > pivot
            if(nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        int i = pivot+1;    //reverse (pivot+1 to n-1)
        int j = n-1;
        while(i <= j) {
            swap(nums[i], nums[j]);
            i++; j--;
        }
    }
};