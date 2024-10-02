class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp(arr);
        sort(temp.begin(), temp.end());
        
        unordered_map<int,int> mp;
        int curr_rank = 1;
        for(int i = 0; i < temp.size(); i++){
            if(mp.find(temp[i]) == mp.end()){
                mp[temp[i]] = curr_rank++;
            }
           
        }
        
        vector<int> ans(arr);
        for(int &itr : ans){
            itr = mp[itr];
        }
        return ans;
    }
};