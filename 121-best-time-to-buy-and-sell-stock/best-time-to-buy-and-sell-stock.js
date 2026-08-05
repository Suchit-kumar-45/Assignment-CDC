/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit=0;
    let buyday=prices[0];
    for(let i=1;i<prices.length;i++)
    {
        let val=prices[i]-buyday;
        if(val>profit)
        {
            profit=val;
        }
        if(prices[i]<buyday)
        {
            buyday=prices[i];
        }
    }
    return profit;

    
};