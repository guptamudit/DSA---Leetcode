class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 =0;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < nums.size(); i++ ){
            if(nums[i] == 0){
                count0 ++;
            }else if(nums[i] == 1){
                count1 ++;
            }else if(nums[i] == 2){
                count2 ++;
            }
        }
       
    int i = 0; 

    
    for (int j = 0; j < count0; j++) {
      nums[i++] = 0;
    }

    
    for (int j = 0; j < count1; j++) {
      nums[i++] = 1;
    }

    
    for (int j = 0; j < count2; j++) {
      nums[i++] = 2;
    }
        
    }
};