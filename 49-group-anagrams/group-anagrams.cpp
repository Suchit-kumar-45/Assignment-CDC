class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>freq;
        vector<vector<string>>ans;
        
        for(int i=0;i<n;i++)
        {
            vector<int>arr(26,0);
            string word=strs[i];
            for(int j=0;j<word.size();j++)
            {
                arr[word[j]-'a']++;
            }
            string newWord="";
            for(int i=0;i<26;i++)
            {
                if(arr[i]>0)
                {
                    newWord+=string(arr[i],i+'a');
                }
            }
            freq[newWord].push_back(word);


        }
        for(auto &i:freq)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};