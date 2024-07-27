class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& orig, vector<char>& chan, vector<int>& cost) {
        vector<vector<int>> mat(26, vector<int>(26, INT_MAX));
        for(size_t i = 0; i < 26; ++i)
            mat[i][i] = 0;
        for(size_t i = 0; i < cost.size(); ++i)
            if(cost[i]<mat[orig[i]-'a'][chan[i]-'a']) 
                mat[orig[i]-'a'][chan[i]-'a']=cost[i];

        for(size_t k = 0; k < 26; ++k){
            for(size_t i = 0; i < 26; ++i){
                for(size_t j = 0; j < 26; ++j){
                    if(max(mat[i][k], mat[k][j])==INT_MAX) continue;
                    mat[i][j]=min(mat[i][j], mat[i][k]+mat[k][j]);
                }
            }
        } 

        long long ans = 0;
        for(size_t i = 0; i < source.size(); ++i){
            int c = mat[source[i]-'a'][target[i]-'a'];
            if(c==INT_MAX) return -1;
            ans+=c;
        }
        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();