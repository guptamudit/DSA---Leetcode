class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
        stack<char> s1;
        for(auto j : s) s1.push(j);
           
        
        while( i < s.size()){
            s[i] = s1.top();
            i++;
            s1.pop();
            
        }
    }
};