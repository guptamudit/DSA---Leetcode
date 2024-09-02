class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char &it : s){
            ans += tolower(it);
        }
        return ans;
    }
};