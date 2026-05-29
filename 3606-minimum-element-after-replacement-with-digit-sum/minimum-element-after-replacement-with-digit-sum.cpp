class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int val=nums[i];
            while(val!=0)
            {
                int digit=val%10;
                sum+=digit;
                val=val/10;
            }
            mini=min(mini,sum);
            nums[i]=sum;
        }
        return mini;
        
    }
};