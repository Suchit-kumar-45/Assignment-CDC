/**
 * @param {number[]} nums
 * @return {number[][]}
 */
function solve(nums,i,n,ans,sets)
{
    if(i>=n)
    {
        ans.push([...sets]);
        return;
    }
    solve(nums,i+1,n,ans,sets);
    sets.push(nums[i]);
    solve(nums,i+1,n,ans,sets);
    sets.pop();
}
var subsets = function(nums) {
    let ans=[];
    let sets=[];
    let n=nums.length;
    solve(nums,0,n,ans,sets);
    return  ans;
    
};