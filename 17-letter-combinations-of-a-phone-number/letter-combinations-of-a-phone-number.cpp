class Solution {
public:
    void solve(string digits, string mapp[],vector<string>&ans,string s,int i)
    {
        if(i>=digits.size())
        {
            ans.push_back(s);
            return;
        }
        char ch=digits[i];
        int val=ch-'0';
        string temp=mapp[val];
        for(int j=0;j<temp.size();j++)
        {
            s.push_back(temp[j]);
            solve(digits,mapp,ans,s,i+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string s;
        string mapp[10]={"", "", "abc", "def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"};
        solve(digits,mapp,ans,s,0);
        return ans;

        
    }
};