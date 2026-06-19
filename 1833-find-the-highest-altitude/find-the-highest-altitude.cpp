class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int idx=2;
        vector<int>ans(n+1);
        ans[0]=0;
        ans[1]=gain[0];
        for(int i=1;i<n;i++)
        {
            ans[idx]=(ans[i]+gain[i]);
            idx++;

        }
        return *max_element(ans.begin(),ans.end());
        
    }
};