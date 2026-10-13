class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m+n);
        int index = 0;
        int i = 0;
        int j = 0;
        // Merge both arrays in sorted order
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                arr[index++] = nums1[i];
                i++;
            } else {
                arr[index++] = nums2[j];
                j++;
            }
        }
        while(i < m) {      // Copy remaining elements of nums1
            arr[index++] = nums1[i];
            i++;
        }
        while(j < n) {     // Copy remaining elements of nums2
            arr[index++] = nums2[j];
            j++;
        }
        for(int k=0; k<m+n; k++) {   // Sorted array ko wapas nums1 mein copy karna
            nums1[k] = arr[k];
        }
    }
};