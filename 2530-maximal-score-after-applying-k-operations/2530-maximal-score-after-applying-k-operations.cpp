class Solution {
public:
    long long maxKelements(vector<int>& n, int k) {
        long long ans=0;
        priority_queue<int> maxheap(n.begin(),n.end());
        while(k>0 &&  !maxheap.empty()){
            int x = maxheap.top();
            maxheap.pop();
            ans += x;
            int newval = ceil(x/3.0);
            k--;
            maxheap.push(newval);
        }
        return ans;
    }
};