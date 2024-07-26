class Solution {
public:
    int sumByD(vector<int>& arr, int mid){
        int sum = 0;
        int n = arr.size();
        for(int i = 0 ; i < n; i++){
            sum = sum + ceil((double)(arr[i])/(double)(mid));
        }
        return sum;
    }
    
    
    int smallestDivisor(vector<int>& arr, int threshold) {
        
        int s = 1;
        int e  = *max_element(arr.begin(), arr.end());
        while(s<=e){
            int mid =  (s+e)/2;
            if(sumByD(arr, mid) <= threshold){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return s;  
            
    }
};