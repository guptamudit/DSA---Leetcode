class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;

        for(auto it:arr)
        {
            mpp[it]++;
        }
        vector<string> ans;
        for(auto it:arr)
        {
            if(mpp[it]==1)
            ans.push_back(it);
        }
        if(k>ans.size())
        return "";

        return ans[k-1];
    }
};