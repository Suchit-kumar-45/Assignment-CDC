class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n=asteroids.size();
        int count=0;
        long long sum=mass;
        for(int i=0;i<n;i++)
        {
            if(sum>=asteroids[i])
            {
                sum+=asteroids[i];
                count++;
            }
        }
        if(count==n)
        {
            return true;
        }
        return false;
        
    }
};