class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int left = 0, right = n - 1;
        while (right-left+1>k) {
            if(abs(arr[left]-x)>abs(arr[right]-x)){
                left++;
            }else{
                right--;
            }
        }
        vector<int>ans(arr.begin()+left,arr.begin()+right+1);
        return ans;
    }

};