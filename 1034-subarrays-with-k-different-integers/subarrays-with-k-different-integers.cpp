class Solution {
public:
    int solve(vector<int>& nums, int k)
    {
        int n=nums.size();
        int i=0,j=0;
        int ans=INT_MIN;
        unordered_map<int,int>freq;
        while(j<n)
        {
            freq[nums[j]]++;

            while(freq.size()>k)
            {
                freq[nums[i]]--;
                if(freq[nums[i]]==0)
                {
                    freq.erase(nums[i]);
                }
                i++;
            }
            ans+=max(ans,j-i+1);
            j++;

        }
        return ans;

    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
        
        
    }
};