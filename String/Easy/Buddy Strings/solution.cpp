class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // Length different
        if(s.size() != goal.size()) {
            return false;
        }
        int st = 0;
        int end = 0;
        int mismatch = 0;
        char s1, g1;
        char s2, g2;
        // Find mismatches
        while(st < s.size() && end < goal.size()) {
            if(s[st] == goal[end]) {
                st++;
                end++;
            } else if(s[st] != goal[end]) {
                // Store first mismatch
                if(mismatch == 0) {
                    s1 = s[st];
                    g1 = goal[end];
                    // Store second mismatch
                } else if(mismatch == 1) {
                    s2 = s[st];
                    g2 = goal[end];
                } else if(mismatch >= 2) {
                    return false;
                }
                mismatch++;
                st++;
                end++;
            }
        }
        // Check two mismatches
        if(mismatch == 2) {
            if(s1 == g2 && s2 == g1) {
                return true;
            } else {
                return false;
            } 
        } 
        // Check duplicate for 0 mismatch
        if(mismatch == 0) {
            for(int i=0; i<s.size()-1; i++) {
                for(int j=i+1; j<s.size(); j++) {
                    if(s[i] == s[j]) {
                        return true;
                    }
                }
            }
        } 
        return false;
    }
};