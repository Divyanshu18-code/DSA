class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            if(st.empty()) {
                st.push(s[i]);   // Push character
            } else if(st.top() == s[i]) {
                st.pop();        // Remove duplicate
            } else {
                st.push(s[i]);  // Push different character
            }
        }
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());   // Reverse string
        return ans;
    }
};