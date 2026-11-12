class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {    // Opening brackets
                st.push(s[i]);   
            }
            
            if(s[i] == ')' || s[i] == '}' || s[i] == ']') {   // Closing brackets
                if(st.empty()) {
                    return false;
                }
                if((s[i] == ')' && st.top() != '(') || 
                (s[i] == '}' && st.top() != '{') || 
                (s[i] == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
            
        }
        return st.empty();
    }
};