/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const n=nums.length;
    let mp=new Map();
    for(let i=0;i<n;i++)
    {
        let req=target-nums[i];
       if(mp.has(req))
        {
            return [i,mp.get(req)];
        }
        else
        {
            mp.set(nums[i],i);
        }
    }
    return -1;

    
};