class Solution {
public:
    bool canJump(vector<int>& nums) {
        //we will check if arr[i] + i is >= nums.size()
        int reach = 0;
        for(int i=0;i<=reach;i++){
            reach = max(reach,i+nums[i]);
            if(reach >= nums.size()-1) return true;
        }
        return false;
    }
};