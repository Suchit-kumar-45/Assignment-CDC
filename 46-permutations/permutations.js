/**
 * @param {number[]} nums
 * @return {number[][]}
 */
function solve(nums,i,n,ans)
{
    if(i==n-1)
    {
        ans.push([...nums]);
        return;

    }
    for(let j=i;j<n;j++)
    {
        [nums[i],nums[j]]=[nums[j],nums[i]];
        solve(nums,i+1,n,ans);
        [nums[i],nums[j]]=[nums[j],nums[i]];
    }
}
var permute = function(nums) {
    let n=nums.length;
    let ans=[];
    solve(nums,0,n,ans);
    return ans;
    
};