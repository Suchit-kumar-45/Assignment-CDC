class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int p=nums[i]*nums[j]*nums[k];
                if(p>ans)
                {
                    ans=p;
                }
                j++;
                k--;
            }
        }
        return ans;
        
    }
};