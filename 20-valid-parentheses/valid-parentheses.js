/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack=[];
    let n=s.length;
    if(n==1)
    {
        return false;
    }
    for(let i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            stack.push(s[i]);
        }
        else
        {
            if(stack.length==0)
            {
                return false;
            }
            if((s[i]==')' && stack[stack.length-1]=='(') || (s[i]=='}' && stack[stack.length-1]=='{') || (s[i]==']' && stack[stack.length-1]=='['))
            {
                stack.pop();
            }
            else
            {
                return false
            }
        }
        
    }
    if(stack.length==0)
    {
        return true;
    }
    return false;

    
};