class Solution {
public:
    bool solve(string &s, string &p,int i,int j, int m, int n,vector<vector<int>>&dp)
    {
        if(j==n)
        {
            if(i==m)
                return true;
            return false;
        }
        if(i==m)
        {
            while(j<n)
            {
                if(p[j] != '*')
                {
                    return false;
                }
                j++;
            }
            return true;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i<m && j<n && (s[i]==p[j] || p[j]=='?'))
        {
            return dp[i][j]=solve(s,p,i+1,j+1,m,n,dp);
        }
        if(j<n && p[j]=='*')
        {
            return dp[i][j]=(solve(s,p,i,j+1,m,n,dp) || solve(s,p,i+1,j,m,n,dp));
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(s,p,0,0,m,n,dp);
        
    }
};