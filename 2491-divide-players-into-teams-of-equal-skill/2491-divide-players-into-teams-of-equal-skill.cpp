class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();

        sort(skill.begin(),skill.end());
        int low=0;
        int high=n-1;
        long long ans=0;

        while(low<high){
            if(skill[low]+skill[high]!=skill[low+1]+skill[high-1]){
                return -1;
            }
            else{
                ans+=skill[low]*skill[high];
            }
            low++;
            high--;
        }
        return ans;

    }
};