class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int> temp;
        for(int i=0; i<arr.size();i++){
            if(arr[i] != 0){
                temp.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i< temp.size(); i++){
            arr[i] = temp[i];
        }
        int nz = temp.size();
        for(int i = nz; i < arr.size(); i++ ){
            arr[i] = 0;
        }
    }
};