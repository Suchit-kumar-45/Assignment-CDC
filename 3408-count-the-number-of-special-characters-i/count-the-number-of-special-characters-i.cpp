class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        set<char>freq1;
        set<char>freq2;
        for(char i:word)
        {
            if(i>='a' && i<='z')
                freq1.insert(i);
            if(i>='A' && i<='Z')
                freq2.insert(i);
        }
        for(auto ch:freq1)
        {
            if(freq2.find(toupper(ch)) != freq2.end())
            {
                ans++;
                freq2.erase(toupper(ch));
            }
        }
        return ans;
        
    }
};