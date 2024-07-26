class Solution {
public:
    
    int possible(vector<int>&arr,int m,int k,int n)
{
    int cnt=1,last_added=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last_added>=m)
        {
            last_added=arr[i];
            cnt++;
        }
        if(cnt>=k)
        return true;
    }
    return false;
}
    
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int low = 0;
        int high = 1e9;
        int ans;
        sort(position.begin(), position.end());
        while(low <= high){
            int mid = (low + high)/2;
            if(possible(position, mid, m, n)){
                ans = mid;
                low = mid + 1;                
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
        
    }
};