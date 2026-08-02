int solve(int n, int *dp)
{
    int ans=INT_MIN;
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    for(int i=1;i<n;i++)
    {
        int maxi=INT_MIN;
        int val=solve(n-i,dp);
        if(n-i>=val)
        {
            maxi=i*(n-i);
        }
        else
        {
            maxi=i*val;
        }
        if(ans<maxi)
        {
            ans=maxi;
        }
    }
    return dp[n]=ans;
}
int integerBreak(int n) {
    int *dp=(int *)malloc((n+1)*(sizeof(int)));
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    return solve(n,dp);
}