/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
var smallestNumber = function(n, t) {
    for(let i=n;i<=100;i++)
    {
        let num=i;
        let prod=1;
        while(num != 0)
        {
            let digit=num%10;
            prod*=digit;
            num=Math.trunc(num/10);
        }
        if(prod%t==0)
        {
            return i;
        }
    }
    return 0;

    
};