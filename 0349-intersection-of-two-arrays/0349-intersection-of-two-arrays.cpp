class Solution {
public:
    vector<int> intersection(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        
        unordered_set<int> st1(begin(A),end(A));
        
        unordered_set<int> ans;
        
        for(int it : B){
            if(st1.find(it) != st1.end() ){
                ans.insert(it);
            }
        }
        
        vector<int> u(begin(ans),end(ans));
        return u;
    }
};