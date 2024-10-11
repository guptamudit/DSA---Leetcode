class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<pair<int, pair<int,int>>> mv;
        int n = times.size();
        for(int i = 0; i < n; i++){
            pair<int,pair<int,int>> p = {times[i][0],{times[i][1],i}}; //{arrivaltime{departtime,friend number}}
            mv.push_back(p);
        }
        
        sort(mv.begin(),mv.end());
        vector<int> chair(n,-1);
        
        for(int i = 0; i <n;i++){
            int arrivalTime = mv[i].first;
            int departTime = mv[i].second.first;
            int friendNumber = mv[i].second.second;
                for(int j = 0; j < n;j++){
                    if(chair[j] <= arrivalTime){
                        chair[j] = departTime;
                        if(friendNumber == targetFriend){
                            return j;
                        }
                        break;
                    }
                }
        }
        return 0;
    }
};