class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int i=0; i<=s.length(); i++) {
            //end of a word
            if(i==s.length() || s[i]==' ') {
                int left = start;
                int right = i-1;
                //reverse current word
                while(left < right) {
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp;
                    left++;
                    right--;
                }
                start = i+1;
            }
        }
        return s;
    }
};