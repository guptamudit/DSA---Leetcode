class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0, oddcnt = 0, prevcnt = 0, res = 0;
        int n = nums.size();
        
        while(r < n){
            if(nums[r]%2 != 0){ //odd number
                oddcnt++;
                prevcnt = 0;
            }
            
            while(oddcnt == k){
                prevcnt++;
                
                if(l < n && nums[l]%2 == 1){ //odd hai i
                    oddcnt--;
                }
                l++;
            }
            res += prevcnt;
            r++;
        }
        return res;
        
        
    }
};
