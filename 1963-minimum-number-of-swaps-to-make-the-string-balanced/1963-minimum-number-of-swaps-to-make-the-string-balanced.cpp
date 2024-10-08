
//see notes also
class Solution {
public:
    int minSwaps(string s) {
        int closing = 0;
        int maxClosing = 0;
        
        for(auto it : s){
            if(it == '['){
                closing--;
            }else{
                closing++;
            }
            maxClosing = max(maxClosing, closing);
        }
        
        return (maxClosing + 1)/2;
    }
};