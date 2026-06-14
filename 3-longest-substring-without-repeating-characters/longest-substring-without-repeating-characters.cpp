class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        while(j<n)
        {
            freq[s[j]]++;
            while(freq[s[j]]>1)
            {
                freq[s[i]]--;      
                if(freq[s[i]]==0)
                {
                    freq.erase(s[i]);
                }
                i++;
            }
            j++;
            ans=max(ans,j-i);
            }
            return ans;
        
    }
};