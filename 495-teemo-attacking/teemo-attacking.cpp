class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans+=min(duration,abs(timeSeries[i]-timeSeries[i+1]));
        }
        ans+=duration;
        return ans;
        
    }
};