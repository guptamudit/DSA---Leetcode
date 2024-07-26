class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size() - 1;
        int m = arr[0].size() - 1;
        bool firstrow = false;
        bool firstcol = false;
        
        for(int i = 0; i <= n; i++){
             for(int j = 0; j <= m; j++){
                if(arr[i][j] == 0){
                    if(i == 0) firstrow = true;
                    if(j == 0) firstcol = true;
                    arr[0][j] = 0;
                    arr[i][0] = 0;
                }
            }
        }
        
        for(int i = 1 ; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(arr[i][0] == 0 || arr[0][j] == 0){
                    arr[i][j] = 0;
                }
            }
        }
            
        
        
        if(firstrow){
            for(int j = 0 ; j<= m; j++){
                arr[0][j] = 0;
            }
        }
        if(firstcol){
            for(int i = 0 ; i<= n; i++){
                arr[i][0] = 0;
            }
        }
        
        
    }
};