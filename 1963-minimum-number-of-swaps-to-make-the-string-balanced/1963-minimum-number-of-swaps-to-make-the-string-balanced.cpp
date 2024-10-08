class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int imbalance = 0;
        for(auto it : s){
            if(it == '['){
                st.push(it);
            }
            else if(it == ']' && st.empty()){
                imbalance++;
            }else{
                st.pop();
            }
        }
        
        int res = (imbalance + 1) / 2;
        return res;
    }
};