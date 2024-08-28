class Solution {
public:
    bool solve(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int n, int m, int i, int j){
        if(i<0 || i>=n || j<0 ||j>=m || grid2[i][j]==0){
            return 1;
        }
        if(grid2[i][j]!=grid1[i][j]){
            return 0;
        }
        grid2[i][j]=0;
        bool c=true;
        bool o1=solve(grid1,grid2,n,m,i+1,j);
        bool o2=solve(grid1,grid2,n,m,i,j+1);
        bool o3=solve(grid1,grid2,n,m,i-1,j);
        bool o4=solve(grid1,grid2,n,m,i,j-1);
        return c&&o1&&o2&&o3&&o4;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid1.size(),m=grid1[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    if(solve(grid1,grid2,n,m,i,j)){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};