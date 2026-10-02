class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        int st = 0;
        int end = 0;
         // Compare
        while(st < n && end < m) {
            if(name[st] == typed[end]) {
                st++;
                end++;
            } else if(end > 0 && typed[end] == typed[end-1]) {
                end++;
            } else {
                return false;
            }
        }
        // Name incomplete
        if(st < n) {
            return false;
        }
        // Check extra chars
        while(end < m) {
            if(end > 0 && typed[end] == typed[end-1]) {
                end++;
            }
            else {
                return false;
            }
        }
        return true;
    }
};