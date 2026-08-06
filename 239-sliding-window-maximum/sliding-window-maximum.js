/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var maxSlidingWindow = function(nums, k) {
    let ans=[];
    let n=nums.length;
    let i=0,j=0;
    let maxi=-Infinity;
    while(j<k)
    {
        maxi=Math.max(maxi,nums[j]);
        j++;
    }
    ans.push(maxi);
    while(j<n)
    {
        if(maxi==nums[i])
        {
            if(maxi<=nums[j])
            {
                maxi=nums[j];
            }
            else
            {
                maxi=-Infinity;
                for(let k=i+1;k<=j;k++)
                {
                    maxi=Math.max(maxi,nums[k]);
                }
            }
        }
        else
        {
            maxi=Math.max(maxi,nums[j]);
        }
        ans.push(maxi);
        i++;
        j++;
    }
    return ans;
    
};