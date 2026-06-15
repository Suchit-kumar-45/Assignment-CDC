class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int oneCount=0,zeroCount=0,twoCount=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                zeroCount++;
            else if(nums[i]==1)
                oneCount++;
            else
                twoCount++;
        }
        int idx=0;
        while(zeroCount--)
        {
            nums[idx++]=0;
        }
        while(oneCount--)
        {
            nums[idx++]=1;
        }
        while(twoCount--)
        {
            nums[idx++]=2;
        }

        
    }
};