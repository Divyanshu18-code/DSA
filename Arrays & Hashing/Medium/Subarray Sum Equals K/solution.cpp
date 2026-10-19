class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0; 
        unordered_map<int, int> m;
        m[0] = 1;   // Empty prefix sum ki frequency

        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            int val = sum - k;   // Current prefix sum

            if(m.find(val) != m.end()) {    // Matching prefix sum mila toh count badha
                count += m[val];
            }
            m[sum]++;    // Prefix sum ki frequency update
        }
        return count;
    }
};