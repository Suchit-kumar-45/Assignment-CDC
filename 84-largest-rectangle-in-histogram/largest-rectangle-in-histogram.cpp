class Solution {
public:
    void nextSmallestElement(vector<int>&heights,vector<int>&next)
    {
        int n=heights.size();
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr)
            {
                st.pop();
            }
            next[i]=st.top();
            st.push(i);
        }
    }
    void prevSmallestElement(vector<int>&heights,vector<int>&prev)
    {
        int n=heights.size();
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr)
            {
                st.pop();
            }
            prev[i]=st.top();
            st.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int ans=INT_MIN;
        int n=heights.size();
        vector<int>next(n);
        vector<int>prev(n);
        nextSmallestElement(heights,next);
        prevSmallestElement(heights,prev);
        for(int i=0;i<n;i++)
        {
            int l=heights[i];
            if(next[i]==-1)
            {
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int area=l*b;
            ans=max(ans,area);
        }
        return ans;
        
    }
};