class Solution {
public:
    bool isPossible(vector<int>& nums, int threshold, int mid)
    {
        long long ans=0;
        for(int i:nums)
        {
            ans+=i/mid;
            if(i%mid != 0)
            {
                ans++;
            }
        }
        if(ans<=threshold)
        {
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans=0;
        if(nums.size()==threshold)
        {
            return e;
        }
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(nums,threshold,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
        
    }
};