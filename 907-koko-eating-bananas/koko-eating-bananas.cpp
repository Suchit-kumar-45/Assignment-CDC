class Solution {
public:
    bool possible(vector<int>& piles, int h, int k)
    {
        long long hours=0;
        for(int &pile:piles)
        {
            hours+=(pile/k);
            if(pile%k != 0)
            {
                hours++;
            }
        }
        if(hours<=h)
        {
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int mid=s+(e-s)/2;
        int ans=0;
        while(s<=e)
        {
            
            if(possible(piles,h,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;



        
    }
};