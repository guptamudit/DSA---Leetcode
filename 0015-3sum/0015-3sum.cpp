class Solution { // T.C. -> O (n ^ 2), S.C. -> O (m).
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i <= n - 3; ++i) {
            if (i > 0 && nums[i - 1] == nums[i]) // To avoid forming duplicate triplets.
                continue;
            
            int target = -(nums[i]);
            
            int j = i + 1, k = n - 1;

            while (j < k) {                
                if (nums[j] + nums[k] < target) 
                    j++;
                else if (nums[j] + nums[k] > target)
                    k--;
                else {
                    while (j < k && nums[j] == nums[j + 1]) // To avoid forming duplicate triplets.
                        j++;

                    while (j < k && nums[k - 1] == nums[k]) // To avoid forming duplicate triplets.
                        k--;

                    ans.push_back({nums[i], nums[j], nums[k]});
                    
                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
};