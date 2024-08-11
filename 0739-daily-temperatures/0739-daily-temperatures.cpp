class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        stack<int>s;

        int n=temperatures.size();

        for(int i=n-1; i>=0 ; i--){

            while(!s.empty() && temperatures[s.top()]<=temperatures[i]){
                s.pop();
            }

            if(s.empty()){
                ans.push_back(0);
            }

            else{
                ans.push_back(s.top()-i);
            }
            s.push(i);
        }
 reverse(ans.begin() , ans.end());
        return ans;
    }
};