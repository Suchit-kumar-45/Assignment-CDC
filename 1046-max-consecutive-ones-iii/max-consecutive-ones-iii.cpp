class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            freq[nums[j]]++;
            while(freq[0]>k)
            {
                freq[nums[i]]--;
                if(freq[nums[i]]==0)
                {
                    freq.erase(nums[i]);
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;

        }
        return ans;

        
    }
};