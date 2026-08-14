class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int n=s.size();
        int ans=INT_MIN;
        while(j<n)
        {
            mp[s[j]]++;
            while(mp[s[j]]>2)
            {
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};