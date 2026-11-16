class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        bool found = false;
        for(int i=0; i<nums1.size(); i++) {
            bool found = false;
            for(int j=0; j<nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {           // Find matching element

                    for(int k=j+1; k<nums2.size(); k++) {  // Search right side
                        if(nums2[k] > nums1[i]) {   // Find next greater
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }
                }
            }
            if(!found) {   // No greater element found
                ans.push_back(-1);
            }
        }
        return ans;
    }
};