class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0, st = -1;
        vector<int> charSet(256, -1);

        for(int i=0; i<n; i++) {
            if(charSet[s[i]] > st) {
                st = charSet[s[i]];
            }
            charSet[s[i]] = i;
            maxLen = max(maxLen, i-st);
        }
        return maxLen;
    }
};