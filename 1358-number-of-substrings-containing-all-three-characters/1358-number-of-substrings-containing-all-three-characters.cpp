class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int ans = 0;
        int i=0,j=0;
        vector<int> arr(3,0);

        while(j<s.length())
        {
            arr[s[j]-'a']++;
            while(arr[0] && arr[1] && arr[2])
            {
                ans += s.length()-j;
                arr[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return ans;
    }
};