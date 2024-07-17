class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto ans:mpp){
            if(ans.second == 1){
                return ans.first;
            }
        }
        return -1;
    }
};