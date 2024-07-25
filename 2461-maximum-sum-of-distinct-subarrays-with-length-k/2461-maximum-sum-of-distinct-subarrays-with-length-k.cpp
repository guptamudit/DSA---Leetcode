class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long, long long> mp;
        long long ans = 0, sum = 0;
        long long low = 0, high = 0;
        while(high < nums.size()){
            sum += nums[high];
            mp[nums[high]]++;
            if(high - low + 1 == k){
                if(mp.size() == k) ans = max(ans, sum);
                mp[nums[low]]--;
                if(mp[nums[low]] == 0) mp.erase(nums[low]);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        return ans;
    }
};