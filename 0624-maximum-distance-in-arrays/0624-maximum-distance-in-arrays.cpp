class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxDistance = 0;

        int minVal = arrays[0].front();
        int maxVal = arrays[0].back();

        for (int i = 1; i < arrays.size(); i++) {
            
            maxDistance = max(maxDistance, abs(arrays[i].back() - minVal));
            maxDistance = max(maxDistance, abs(maxVal - arrays[i].front()));

            
            minVal = min(minVal, arrays[i].front());
            maxVal = max(maxVal, arrays[i].back());
        }

        return maxDistance;
    }
};