class Solution {
    
public:
    static bool compare(string &a, string &b){
        return a+b > b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        string ans = "";
        
        vector<string> v;
        for(int i = 0; i < nums.size(); i++){
            v.push_back(to_string(nums[i]));
        }
        
        sort(v.begin(), v.end(), compare);
        
        if(v[0] == "0") return "0";
        for(auto &it : v){
            ans += it;
        }
        
        return ans;
    }
};