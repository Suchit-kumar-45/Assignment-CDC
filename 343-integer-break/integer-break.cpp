class Solution {
int solve(int n,vector<int>&dp)
{
    int ans=INT_MIN;
    if(n==1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    for(int i=1;i<n;i++)
    {
        int maxi=i*max(n-i,solve(n-i,dp));
        ans=max(ans,maxi);
    }
    return dp[n]=ans;
}
public:
    int integerBreak(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};