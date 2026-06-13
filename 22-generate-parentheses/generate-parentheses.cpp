class Solution {
public:
    void solve(int open, int close,string op, vector<string>&ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(op);
            return;
        }
        else if(open==close)
        {
            string temp=op;
            temp+='(';
            solve(open-1,close,temp,ans);
        }
        else if(open==0)
        {
            string temp=op;
            temp+=')';
            solve(open,close-1,temp,ans);
        }
        else if(close==0)
        {
            string temp=op;
            temp+='(';
            solve(open-1,close,temp,ans);
        }
        else
        {
            string temp1=op;
            string temp2=op;
            temp1+='(';
            temp2+=')';
            solve(open-1,close,temp1,ans);
            solve(open,close-1,temp2,ans);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string op;
        int open=n;
        int close=n;
        solve(open,close,op,ans);
        return ans;

        
    }
};