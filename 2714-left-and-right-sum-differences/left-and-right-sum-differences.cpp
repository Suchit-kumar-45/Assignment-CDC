class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            left[i]=leftsum;
            leftsum+=nums[i];
        }
        int rightsum=0;
        for(int i=0;i<nums.size();i++)
        {
            rightsum+=nums[i];
            right[i]=sum-rightsum;
        }
        vector<int>ans(n);
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;

        
    }
};