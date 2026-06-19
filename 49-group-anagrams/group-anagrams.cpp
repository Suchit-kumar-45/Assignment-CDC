class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>freq;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++)
        {
            string word=strs[i];
            sort(word.begin(),word.end());
            freq[word].push_back(strs[i]);


        }
        for(auto &i:freq)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};