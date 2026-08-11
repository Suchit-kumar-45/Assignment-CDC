/**
 * @param {number[]} nums
 * @return {number}
 */
function solve(nums,i,n,prev,dp)
{
    if(i==n)
    {
        return 0;
    }
    if(dp[i][prev+1] != -1)
    {
        return dp[i][prev+1];
    }
    let include=0;
    if(prev==-1 || nums[i]>nums[prev])
    {
        include=1+solve(nums,i+1,n,i,dp);
    }
    let exclude=solve(nums,i+1,n,prev,dp);
    return dp[i][prev+1]=Math.max(include,exclude);
        
}
var lengthOfLIS = function(nums) {
    let n=nums.length;
    let dp=Array.from(
        {length:n},
        ()=>Array(n+1).fill(-1)
    );
    return solve(nums,0,n,-1,dp);
    
};