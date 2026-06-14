class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        unordered_map<char,int>freq;
        int reqCount=t.size();
        int i=0,j=0;
        int minWindowSize=INT_MAX;
        int startIndex=0;
        if(t.size()>n)
        {
            return "";
        }
        for(char ch:t)
        {
            freq[ch]++;
        }
        while(j<n)
        {
            char ch=s[j];
            if(freq[ch]>0)
            {
                reqCount--;
            }
            freq[ch]--;
            while(reqCount==0)
            {
                int windowSize=j-i+1;
                if(minWindowSize>windowSize)
                {
                    minWindowSize=windowSize;
                    startIndex=i;
                }
                freq[s[i]]++;
                if(freq[s[i]]>0)
                {
                    reqCount++;
                }
                i++;
            }
            j++;
        }
        if(minWindowSize==INT_MAX)
        {
            return "";
        }
        return s.substr(startIndex,minWindowSize);
        
    }
};