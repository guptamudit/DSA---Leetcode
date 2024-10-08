class Solution {
public:
    void helper(int i, int n, vector<int> &v){
        if(i > n){
            return;
        }
        
        v.push_back(i);
        for(int j = 0; j < 10; j++){
            helper(i * 10 + j, n, v);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        for(int i = 1; i <= 9; i++){
            helper(i,n,v);
        }
        return v;
    }
};