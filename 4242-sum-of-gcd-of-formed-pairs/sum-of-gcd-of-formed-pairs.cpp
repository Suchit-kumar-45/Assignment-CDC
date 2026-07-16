class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        int mx=0;
        for(int i=0;i<n;i++)
            {
                mx=max(mx,nums[i]);
                pre[i]=__gcd(nums[i],mx);
            }
        sort(pre.begin(),pre.end());
        int l=0,r=n-1;
        long long ans=0;
        while(l<r)
              {
                  ans+=__gcd(pre[l],pre[r]);
                  l++;
                  r--;
              }
        return ans;
    }
};