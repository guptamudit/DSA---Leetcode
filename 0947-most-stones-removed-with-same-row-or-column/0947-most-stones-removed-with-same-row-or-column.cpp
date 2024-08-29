class Solution {
public:
    int visited[1001];

    void dfs(int index, int m,vector<vector<int>>& stones){
        visited[index]=1;
        for(int i=0;i<m;i++){
            if(!visited[i]){
                if(stones[index][0]==stones[i][0]){
                    dfs(i,m,stones);
                }
                if(stones[index][1]==stones[i][1]){
                    dfs(i,m,stones);
                }
            }
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        if(stones.size()<=1) return 0;
        int m=stones.size();
        int comp=0;
        for(int i=0;i<m;i++){
            if(!visited[i]){
                dfs(i,m,stones);
                comp++;
            }
        }
        return m-comp;
    }
};