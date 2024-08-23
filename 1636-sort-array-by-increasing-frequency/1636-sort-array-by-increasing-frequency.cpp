bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first > b.first;
    }
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(), cmp);

        for(auto it : vec){
            for(int i=0; i<it.second; i++){
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};