class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char, char> map1;
        unordered_map<char, char> map2;
        for(int i=0; i<s.size(); i++) {
            if(map1.count(s[i])) {
                // mapping already hai
                if(map1[s[i]] != t[i]) {
                    return false;
                }
            }
            if(map2.count(t[i])) {
                // reverse mapping already hai
                if(map2[t[i]] != s[i]) {
                    return false;
                }
            }
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        return true;
    }
};