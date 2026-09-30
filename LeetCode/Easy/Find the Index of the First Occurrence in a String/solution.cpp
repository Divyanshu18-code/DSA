class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i=0; i<=n-m; i++) {
            int count = 0;
            for(int j=0; j<m; j++) {
                if(haystack[i+j] == needle[j]) {
                    count++;
                }
            }
            if(count == m) {
                return i;
            }
        }
        return -1;
    }
};