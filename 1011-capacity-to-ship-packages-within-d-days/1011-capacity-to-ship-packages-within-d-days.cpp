class Solution {
public:
    
    bool ispossible(vector<int>& arr, int n, int days, int mid){
        int dayscount = 1;
        int wtsum = 0;
        
        for (int i = 0; i < n; i++){
            if(arr[i] > mid){
                return false;
            }
            else if(arr[i] + wtsum > mid){
                dayscount ++;
                wtsum = arr[i];
                if(dayscount > days){
                    return false;
                }
                
            }
            else{
                    wtsum += arr[i];
                }
        }
        return true;
        
    }
        
    int shipWithinDays(vector<int>& arr, int days) {
        int n = arr.size();
        int s = 0;
        int sum = 0;
        //begin to end ka sum with initial value 0
        int e=accumulate(arr.begin(),arr.end(),0); 
        // int e = sum;
        int ans = 0;
        while(s<=e){
            int mid = (s+e)/2;
            if(ispossible(arr, n,days, mid)){
                ans = mid;
                e = mid -1;
            }
            else {
                s = mid + 1;
            }
        }
        return ans;
    }
};