class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() -1;
        int n = matrix[0].size() - 1;
        for(int i = 0; i <= m ; i++){
            for(int j = 0; j <= n ; j++){
            if(matrix[i][j] == target){
                return 1;
            }
        }
        }
        return 0;
    }
};