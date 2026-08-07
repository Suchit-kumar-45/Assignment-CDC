/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
 function solve(candidates, target,i,n,ans,temp,total)
 {
    if(total==target)
    {
        ans.push([...temp]);
        return;
    }
    if(total>target || i>=n)
    {
        return;
    }
    temp.push(candidates[i]);
    solve(candidates, target,i,n,ans,temp,total+candidates[i]);
    temp.pop();
    solve(candidates, target,i+1,n,ans,temp,total);

 }
var combinationSum = function(candidates, target) {
    let n=candidates.length;
    let ans=[];
    let temp=[];
    solve(candidates, target,0,n,ans,temp,0);
    return ans;
    
};