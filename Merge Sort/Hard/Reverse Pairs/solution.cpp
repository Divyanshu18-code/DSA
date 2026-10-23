class Solution {
public:
    int mergeSort(vector<int>& nums, int low, int high) {
        if(low >= high) {
            return 0;
        }
        int mid = low + (high - low)/2;
        // Left aur right ke pairs count karo
        int count = mergeSort(nums, low, mid);
        count += mergeSort(nums, mid+1, high);

        // Cross-pairs count karo
        int right = mid+1;
        for(int i=low; i<=mid; i++) {
            while(right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }
            count += right - (mid+1);  
        }
        // Dono sorted halves merge karo
        vector<int> temp;
        int i = low, j = mid+1;
        while(i <= mid && j <= high) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }
        while(i <= mid) {
            temp.push_back(nums[i++]);
        } 
        while(j <= high) {
            temp.push_back(nums[j++]);
        }
        // Sorted values original array mein copy karo
        for(int k=0; k<temp.size(); k++) {
            nums[low+k] = temp[k];
        }
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
    }
};