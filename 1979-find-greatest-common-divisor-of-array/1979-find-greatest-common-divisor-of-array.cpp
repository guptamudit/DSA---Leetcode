class Solution {
private:
    int gcd(int a, int b){
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        
        while(a != b){
            if(a > b){
                a = a-b;
            }
            else{
                b = b-a;
            }
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int small = nums[0];
        int great = nums[0];
        int ans;
        
        
        for(int i = 0; i < nums.size(); i++){
            small = min(small, nums[i]);
            great = max(great, nums[i]);
        }
        
        
        return ans = gcd(small, great);
    }
};