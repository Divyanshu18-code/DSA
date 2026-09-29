class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int st = 0;
        for(int i=0; i<n; i++) {
            char current = chars[i];
            int count = 1;
            int j = i+1;
            while(j < n && chars[j] == current) {
                count++;
                j++;
            }
            chars[st] = current;
            st++;
            if(count > 1) {
                string num = to_string(count);
                for(char c : num) {
                    chars[st] = c;
                    st++;
                }
                
            }
            i = j-1;
        }
        return st;
    }
};