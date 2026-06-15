class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int req=target-nums[i];
            if(freq.find(req) != freq.end())
            {
                ans.push_back(i);
                ans.push_back(freq[req]);
            }
            else
                freq[nums[i]]=i;
        }
        return ans;
        
    }
};