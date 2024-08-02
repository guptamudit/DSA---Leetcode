class Solution {
public:
    int minSwaps(vector<int> &nums) {
        int len = nums.size(), i = 0, j = 0, total = 0, curr = 0, res;
        
        
        // getting the total and the first value of curr
        for (int n: nums) {
            if (n) total++, curr += nums[j++];
        }
        //if nums has only 1s or 0s
        if (!j || j == len) return 0;
        
        // general case
        res = total - curr;
        while (j < len) {
            // update curr
            curr += nums[j++] - nums[i++];
            // update res
            res = min(res, total - curr);
        }
        
        j = 0;
        while (i < len) {
            // updating curr
            curr += nums[j++] - nums[i++];
            // updating res
            res = min(res, total - curr);
        }
        return res;
    }
};