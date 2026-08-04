/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findMissingElements = function(nums) {
    var mini=Infinity;
    var maxi=-Infinity;
    var ans=[];
    for(let i=0;i<nums.length;i++)
    {
        if(maxi<nums[i])
        {
            maxi=nums[i];
        }
        if(mini>nums[i])
        {
            mini=nums[i];
        }
    }
    var mp=new Map();
    for(let i of nums)
    {
        mp.set(i,1);
    }
    for(let i=mini;i<=maxi;i++)
    {
        if(mp.has(i))
        {
            continue;
        }
        else
        {
            ans.push(i);
        }
    }
    return ans;

    
};