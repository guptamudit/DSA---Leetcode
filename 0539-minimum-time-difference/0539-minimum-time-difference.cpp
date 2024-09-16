class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minutes(n);
        
        for(int i = 0; i < n; i++){
            string time = timePoints[i];
            
            string hour = time.substr(0,2);
            string minute = time.substr(3);
            
            int hournum = stoi(hour);
            int minutenum = stoi(minute);
            
            minutes[i] = (hournum * 60) + minutenum;  
        }
        
        sort(minutes.begin(), minutes.end());
        
        int ans = INT_MAX;
        for(int i = 1; i< n; i++){
            ans = min(ans, minutes[i] - minutes[i-1]);
        }
        
        return min(ans, (24*60 - minutes[n-1]) + minutes[0]);
    }
};