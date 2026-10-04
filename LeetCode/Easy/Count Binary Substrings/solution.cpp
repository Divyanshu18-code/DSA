class Solution {
public:
    int countBinarySubstrings(string s) {
        int previous = 0;
        int current = 1;
        int ans = 0;
        for(int i=1; i<s.size(); i++) {
            if(s[i] == s[i-1]) {
                current++;   // Same group
            } else {
                // Group change hua
                ans += min(previous, current);
                previous = current;
                current = 1;
            } 
        }
        ans += min(previous, current);  // Last group ka pair count
        return ans;
    }
};