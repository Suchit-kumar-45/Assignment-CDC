class Solution {
public:
    long long mod=1e9+7;
    long long solve(long long n,long long a)
    {
        if(n==0)
        {
            return 1;
        }
        long long half=solve(n/2,a);
        long long ans=(half*half)%mod;
        if(n%2)
        {
            ans=(a*ans)%mod;
        }
        return ans;

    }
    int countGoodNumbers(long long n) {
        long long evencount=(n+1)/2;
        long long oddcount=n/2;
        long long ans=(solve(evencount,5)*solve(oddcount,4))%mod;
        return (int)ans;
        
    }
};