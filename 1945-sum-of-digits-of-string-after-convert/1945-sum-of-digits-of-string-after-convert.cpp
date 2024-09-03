class Solution {
public:
    int sumDigit(int num){
        int ans = 0;
         while(num) {
            ans += num%10;
            num /= 10;
        }
        return ans;
    }
    int getLucky(string s, int k) {
        int sum = 0;
        for(char &c : s){
            int val = c - 'a' + 1;
            sum += val < 10 ? val : (val % 10 + val /10);
        }
        
        k -= 1; //bcoz we did one transform above
        
        while(sum >= 10 && k--){
            sum = sumDigit(sum);
        }
        
        return sum;
    }
};