class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1))/2;
        int actual_sum = 0;
        
        for(int i =0 ; i < n ; i++){
             actual_sum += nums[i];
            }
        return sum - actual_sum;
    }
};