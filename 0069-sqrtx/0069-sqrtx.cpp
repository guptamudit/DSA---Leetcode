class Solution {
public:
    
    int mySqrt(int x) {
    int low=0;
        int high=x;
        int result=0;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long square=mid*mid;
            if(square<=x)
            {
                result=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return result;
    }
};