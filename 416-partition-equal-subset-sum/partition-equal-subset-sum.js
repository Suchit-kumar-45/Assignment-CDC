/**
 * @param {number[]} nums
 * @return {boolean}
 */
function solve(nums,sum,i,n,dp)
{
    if(i==n)
    {
        return false;
    }
    if(sum==0)
    {
        return dp[sum][i]=true;
    }
    if(dp[sum][i] != -1)
    {
        return dp[sum][i];
    }
    let includee=false;
    if(nums[i]<=sum)
    {
        includee=solve(nums,sum-nums[i],i+1,n,dp);
    }
    let exclude=solve(nums,sum,i+1,n,dp);
    return dp[sum][i]=(includee || exclude);
}
var canPartition = function(nums) {
        let n=nums.length;
        let sum=0;
        for(let i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if (sum % 2 !== 0) {
        return false;
        }
        let dp = Array.from(
        { length: sum + 1 },
        () => Array(n).fill(-1)
        );
        return solve(nums,sum/2,0,n,dp);
    
};