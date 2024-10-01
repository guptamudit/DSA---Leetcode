class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> v(k, 0);
        int n = arr.size();
        
        for(int &num : arr){
            int remainder = (num % k + k) % k;
            v[remainder]++;  
        }
        
        if(v[0] % 2 != 0){
            return false;
        }
        
        for(int rem = 1; rem <= k/2; rem++){
            int complement = k - rem;
            if(v[rem] != v[complement]){
                return false;
            }
        }
        return true;
    }
};