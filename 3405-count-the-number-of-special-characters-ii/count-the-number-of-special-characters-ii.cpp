class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(ch>='A' && ch<='Z' && freq1.find(ch)==freq1.end())
            {
                freq1[ch]=i;
            }
            if(ch>='a' && ch<='z')
            {
                freq2[ch]=i;
            }
        }
        for(auto i:freq1)
        {
            if(freq2.find(tolower(i.first)) != freq2.end())
            {
                if(freq2[tolower(i.first)]<i.second)
                {
                    ans++;
                }
            }
        }
        return ans;
        
        
    }
};