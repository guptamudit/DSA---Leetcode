class Solution {
public:
    int reverse(int x) {
        stringstream ss;
        ss << x;
        string str = ss.str();
        
        if(str == "7463847412" || str == "-8463847412"){
            return(0);
        }

        string result = "";
        bool isNegative = x < 0;
        int startIndex = isNegative ? 1 : 0;

        if(isNegative){
            result += "-";
        }

        for(int i = str.length() - 1; i >= startIndex; i--){
            result += str[i];
        }
        
        // Check for overflow/underflow
        try{
            int reversed = stoi(result);
            return(reversed);
        } catch(out_of_range& e) {
            // Handle overflow/underflow
            return(0);
        }
    }
};