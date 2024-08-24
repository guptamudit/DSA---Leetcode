class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, int>> pq;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            pq.push({i.second, i.first});
        }
        string ans = "";
        while(!pq.empty()){
            pair<int, int> top = pq.top();
            pq.pop();
            char a = top.second;
            int num = top.first;
            for(int i = 0; i<num; i++){
                ans += a;
            }
        }

        return ans;
    }
};