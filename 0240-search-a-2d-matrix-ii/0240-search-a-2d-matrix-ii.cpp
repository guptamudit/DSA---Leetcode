class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row= arr.size();
        int col = arr[0].size();
        
        int rowindex= 0;
        int colindex = col -1;
        
        while(rowindex < row && colindex >= 0){
            int element = arr[rowindex][colindex];
            
            if(element == target){
                return 1;
            }
            else if(element > target){
                colindex--;
            }
            else{
                rowindex++;
            }
        }
        return 0;
    }
};