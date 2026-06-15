class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, int mid)
    {
        int count=0;
        long long ans=0;
        for(int &day:bloomDay)
        {
            if(day<=mid)
            {
                count++;
            }
            else
            {
                ans+=count/k;
                count=0;
            }
        }
        ans+=count/k;
        if(ans>=m)
            return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s=*min_element(bloomDay.begin(),bloomDay.end());
        int e=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;

        if(bloomDay.size()< (long long)m*k)
        {
            return -1;
        }
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(bloomDay,m,k,mid))
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