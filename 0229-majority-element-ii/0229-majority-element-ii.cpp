class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        map<int,int> mp;
        
        int n = nums.size();
        int times = n/3;
        
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        
        for(auto idx : mp){
            if(idx.second > times){
                res.push_back(idx.first);
            }
        }
        
        sort(res.begin(), res.end());
        return res;
    }
};