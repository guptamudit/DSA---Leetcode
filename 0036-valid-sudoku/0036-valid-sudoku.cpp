class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
       int rowcase[9][9] ={0};
        int colcase[9][9] = {0};
        int gridcase[9][9] = {0};
        
        for(int i = 0; i <= arr.size() - 1; i++){
            for(int j = 0; j <= arr[0].size() - 1; j++){
                if(arr[i][j] != '.'){
                    //find number ny subtract char from 0(ASCII VALUE)
                    int number = arr[i][j] - '0';
                    // k denotes grid number
                    int k = i/3 * 3 + j/3 ;
                    

                    // check for the 3 case.
                    if(rowcase[i][number-1]++ || colcase[j][number-1]++ || gridcase[k][number-1]++){
                        return false;
                    }
                }
            }
        }
         return true;
    }
};