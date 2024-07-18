class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int currcount = 0;
        int longest = 1;
        int leastsmaller = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] - 1 == leastsmaller){
                currcount ++;
                leastsmaller = nums[i];
            } 
            else if (nums[i] != leastsmaller){
                currcount = 1;
                leastsmaller = nums[i];
            }
            longest = max(longest, currcount);
        }
        return longest;
    }
};