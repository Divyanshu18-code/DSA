class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        int st = n-1;
        int end = m-1;
        int skipS = 0;
        int skipT = 0;
        while(st >= 0 || end >= 0) {
            //s ka process
            while(st >= 0) {
                if(s[st] == '#') {
                    skipS++;
                    st--;
                } else if(skipS > 0) {
                    skipS--;
                    st--;
                } else {
                    break;
                }
            }
            //t ka process
            while(end >= 0) {
                if(t[end] == '#') {
                    skipT++;
                    end--;
                } else if(skipT > 0) {
                    skipT--;
                    end--;
                } else {
                    break;
                }
            }
            // Ab dono valid characters par hain
            if(st >= 0 && end >= 0) {
                if(s[st] != t[end]) {
                    return false;
                }
                st--;
                end--;
            } else if(st >= 0 || end >= 0) {
                return false;
            }
        }
        return true;
    }
};