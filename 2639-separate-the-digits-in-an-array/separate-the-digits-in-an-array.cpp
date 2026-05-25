class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int word=nums[i];
            string s=to_string(word);
            for(int j=0;j<s.size();j++)
            {
                char ch=s[j];
                int d=ch-'0';
                ans.push_back(d);
            }

        }
        return ans;
        
    }
};