class Solution {
public:
    bool solve(string s, string p,int i, int j, int m, int n,vector<vector<char>>&dp)
    {
        if(j==n)
        {
            if(i==m)
                return true;
            return false;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        bool firstMatch=(i<m && (s[i]==p[j] || p[j]=='.'));
        
        //check next xhar is *
        if(j+1<n && p[j+1]=='*')
        {
            //2 choices:- 1) skip 2) include
            return dp[i][j]=solve(s,p,i,j+2,m,n,dp) || (firstMatch && solve(s,p,i+1,j,m,n,dp));
        }
        return dp[i][j]=(firstMatch && solve(s,p,i+1,j+1,m,n,dp));
    }
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<vector<char>>dp(m+1,vector<char>(n+1,-1));
        return solve(s,p,0,0,m,n,dp);
        
    }
};