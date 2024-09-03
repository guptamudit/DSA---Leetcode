class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long accSum = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= accSum;
        int i = 0;
        int ans = 0;
        while (true){
            if(chalk[i] <= k){
                k = k - chalk[i];
                i++;   
            }
            else{
                ans = i;
                break;
            }
        }
        return ans;
    }
};