class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , string> mp;
        for(int i = 0 ; i < names.size() ; i++){
            mp[heights[i]] = names[i];
        }
        sort(heights.begin() , heights.end());
        int end = names.size() - 1;
        for(int i = 0 ; i < names.size() ; i++){
            names[i] = mp[heights[end]];
            end--;
        }
        return names;
    }
};