class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int n=s.size();
        string ans;
        for(char i:s)
        {
            if(i=='(')
            {
                if(count>0)
                    ans+='(';
                count++;
            }
            else
            {
                count--;
                if(count>0)
                    ans+=')';
                
            }
        }
        return ans;
        
    }
};