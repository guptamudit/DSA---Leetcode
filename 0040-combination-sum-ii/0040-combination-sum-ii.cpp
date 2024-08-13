class Solution {
public:
    int n;
    void solve(int start,vector<vector<int>>&sol,vector<int>&temp,vector<int>candidates,int target)
    {
        if(target==0)sol.push_back(temp);
        for(int i =start;i<n;i++)
        {
            if(i>start&&candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            temp.push_back(candidates[i]);
            solve(i+1,sol,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>sol;
        vector<int>temp;
        solve(0,sol,temp,candidates,target);
        return sol;
    }
};