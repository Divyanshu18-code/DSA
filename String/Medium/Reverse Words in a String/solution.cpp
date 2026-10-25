class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int end = s.size() - 1;
        while(end >= 0) {
            while(end >= 0 && s[end] == ' ') {     //extra space skip kiya
                end--;
            }
            if (end < 0) {   //string khatam
                break;
            }
            int i = end;
            while(i >= 0 && s[i] != ' ') {   //current word ka start find kiya
                i--;
            }
            if(!result.empty()) {   //words ke beech space add kiya
                result += ' ';
            }
            result += s.substr(i+1, end-i);    //current word result mein add 
            end = i-1;   //agle word par jao
        }
        return result;
    }
};