class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarr;   
        
        // Generate all subarray sums
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                subarr.push_back(sum);
            }
        }
        
        // Sort the subarray sums
        sort(subarr.begin(), subarr.end());
        
        // Compute the sum of elements from 'left' to 'right' (1-based index)
       int ans = 0;
        int MOD = 1000000007;
        for(int i = left - 1; i < right; i++) {
            ans = (ans + subarr[i]) % MOD;
        }
        
        return ans;
    }
};
