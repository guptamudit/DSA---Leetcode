class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int it : nums){
            q.push(it);
        }
        
        for(int i = 1; i < k; i++){
            q.pop();
        }
        int ans = q.top();
        return ans;
    }
};