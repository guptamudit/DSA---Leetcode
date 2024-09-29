class AllOne {
public:
    stack<pair<int,string>> st;
    unordered_map<string,int> mp;
    string maxi="",mini="";
    int incV = 1,decV = 1;
    AllOne() {
    }
    void maxiFunc(){
        for(auto m : mp){
            string s = m.first;
            int cnt = m.second;
            if(cnt>mp[maxi]) maxi = s;
        }
        incV = 0;
    }
    void miniFunc(){
        for(auto m : mp){
            string s = m.first;
            int cnt = m.second;
            if(mini=="" || mp[mini]==0) mini = s;
            if(cnt<mp[mini] && cnt>0) mini = s;
        }
        decV = 0;
    }
    void inc(string key) {
        mp[key]++;
        incV = 1;
        decV = 1;
    }
    
    void dec(string key) {
        mp[key]--;
        decV = 1;
        incV = 1;
    }
    
    string getMaxKey() {
        if(incV==1) maxiFunc();
        return maxi;
    }
    
    string getMinKey() {
        if(decV==1) miniFunc();
        return mini;
    }
};
/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */