class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
        vector<vector<int>> keys(4);
        vector<pair<int, int>> count(26, {0, 0});

        
        for(char &c: word)
            count[c-'a']={++count[c-'a'].first, c-'a'};
            sort(count.begin(), count.end(), [](pair<int, int> a, pair<int, int> b){
             return a.first > b.first;
        });

        
        for(auto &x: count)
        {
           
            for(int i=0; i<keys.size(); i++)
            {
                
                if(keys[i].size()<8)
                {
                    keys[i].push_back(x.second);
                    
                    res+=(i+1)*x.first;
                   
                    break;
                }
            }
        }

        return res;
    }
};