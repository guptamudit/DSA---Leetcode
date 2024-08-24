class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        {
            return s;
        }
        vector<string> v1(numRows);
        int index = 0;
        int toggle = 0;
        int n = s.size();
        for(int i = 0 ; i < n ; i++)
        {
            v1[index].push_back(s[i]);
            if(index == 0)
            {
                toggle = 0;
            }
            else if(index == numRows-1)
            {
                toggle = 1;
            }
            if(toggle == 0)
            {
                index++;
            }
            else
            {
                index--;
            }
        }
        string ans = "";
        for(auto x : v1)
        {
            ans += x;
        }
        return ans;
    }
};