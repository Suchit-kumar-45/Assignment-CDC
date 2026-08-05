/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let prod=1;
    let n=nums.length;
    let count=0;
    let arr = new Array(n).fill(0);
    for(let i of nums)
    {
        if(i==0)
        {
            count++;
            continue;
            
        }
        prod=prod*i;
    }
    if(count>1)
    {
        return arr;
    }
    else if(count==1)
    {
        for(let i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                arr[i]=prod;
            }
        }
        return arr;
    }
    for(let i=0;i<n;i++)
    {
        arr[i]=prod/nums[i];
    }
    return arr;

    
};