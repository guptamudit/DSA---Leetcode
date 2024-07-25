class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        //itreate thru string
        for (char c : s) {
            //remove adjacent duplicates
            if (!st.empty() && st.top() == c) { // if currchar is top if stack pop it
                st.pop();
            } else {
                st.push(c); //else push the character
            }
        }
        
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
};