class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>freq,curr;
        for(string& word:words){
            freq[word]++;
        }
        int len=s.size();
        int n=words.size();
        int wordSize=words[0].size();
        int wins=wordSize*n;

        vector<int>ans;
        if(len<wordSize) return ans;
        if(len==n*2 && freq[words[0]]==len/2) {
            for(int i=0;i<=n;i++){
                ans.push_back(i);
            }
            return ans;
        }
  

        for(int j=0;j<wordSize;++j){
            int start=j;
           while(start+wins-1<len){
                curr=freq;
                string currword;
                bool match=true;
                for(int i=0;i<n;++i){
                    currword=s.substr(start+i*wordSize,wordSize);
                    if(!curr.count(currword) or curr[currword]==0){
                        match=false;
                        break;
                    }
                    curr[currword]--;
                }
                if(match==true)
                ans.push_back(start);

                start+=wordSize;
            }
        }
        return ans;
    }
};