class Solution {
public:
//better solution
vector<int> majorityElement(vector<int>& nums) {
vector<int> result;
map<int, int> mpp;
int n = nums.size();
int mini = n/3;
for(int i = 0; i < n; i++){
mpp[nums[i]]++;
}
for(auto it : mpp){
if(it.second > mini){
result.push_back(it.first);
}
}
sort(result.begin(), result.end());
return result;
}
};