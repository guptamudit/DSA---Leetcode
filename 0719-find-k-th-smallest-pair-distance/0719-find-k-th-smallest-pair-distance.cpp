class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(begin(nums), end(nums));
        vector<int> vec(maxi + 1, 0);

        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                int d = abs(nums[i] - nums[j]);
                vec[d]++;
            }
        }

        for (int d=0;d<=maxi;d++) {
            k -= vec[d];
            if (k <= 0) {
                return d; //returning kth smallest distance
            }
        }
        return -1;
    }
};