class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ls[n];
        int rs[n];
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            ls[i]=0;
            else
            ls[i]=st.top()+1;
            st.push(i);
        }
        while (!st.empty())
        st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            rs[i]=n-1;
            else
            rs[i]=st.top()-1;
            st.push(i);
        }
        int maxa=0;
        for(int i=0;i<n;i++)
        {
            maxa=max(maxa,heights[i]*(rs[i]-ls[i]+1));
        }
        return maxa;
    }
};