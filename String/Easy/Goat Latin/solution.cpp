class Solution {
public:
    string toGoatLatin(string sentence) {
        string word;
        stringstream ss(sentence);
        int count = 1;
        string ans;
        while(ss >> word) {
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U'){
                // Vowel: word same rahega
                word += "ma";
            } else {
                // Consonant: first character ko end mein move karo
                char first = word[0];
                word.erase(0, 1);
                word += first;
                word += "ma";
            }
            for(int i=0; i<count; i++) {
                word += 'a';
            }
            ans += word + " ";
            count++;
        }
        ans.pop_back();  //last mein extra space remove
        return ans;
    }
};