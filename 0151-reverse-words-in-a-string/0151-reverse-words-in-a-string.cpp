class Solution {
public:
    string reverseWords(string s) {
       
        stack<string> st;
        int i = 0;
        int n = s.size();
        string ans = "";
        
        while (i < n) {
            while (i < n && s[i] == ' ') i++; // Skip leading spaces
            if (i >= n) break;
            
            string word;
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            st.push(word);
        }
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += ' '; // Add space between words
        }
        
        return ans;
    }
};