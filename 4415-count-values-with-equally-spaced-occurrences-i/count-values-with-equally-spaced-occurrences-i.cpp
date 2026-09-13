class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i:nums)
        {
            freq[i]++;
        }
        int ans=0;
        for(auto &i:freq)
        {
            if(i.second==3)
            {
                vector<int>val;
                for(int j=0;j<n;j++)
                {
                    if(nums[j]==i.first)
                    {
                        val.push_back(j);
                    }
                }
                if(abs(val[0]-val[1])==abs(val[1]-val[2]))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};