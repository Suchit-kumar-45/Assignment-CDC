/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxSubarrayLength = function(nums, k) {
    let n=nums.length;
    let i=0,j=0;
    let map=new Map();
    let ans=-Infinity;
    let count=0;
    while(j<n)
    {
        map.set(nums[j],(map.get(nums[j]) || 0)+1);
        count++;
        while(map.get(nums[j])>k)
        {
            map.set(nums[i],(map.get(nums[i]) || 0)-1);
            count--;
            i++;
        }
        ans=Math.max(ans,count);
        j++;

    }
    return ans;

    
};