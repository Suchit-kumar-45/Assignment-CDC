/**
 * @param {number} n
 * @return {string[][]}
 */
function isSafe(board,row,col,n)
{
    for(let j=0;j<col;j++)
    {
        if(board[row][j]=='Q')
        {
            return false;
        }
    }

    for(let i=0;i<row;i++)
    {
        if(board[i][col]=='Q')
        {
            return false;
        }
    }

    for(let i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }

    for(let i=row-1,j=col+1;i>=0&&j<n;i--,j++)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    return true;
}

function NQueen(board,ans,row,n)
{
    if(row==n)
    {
        ans.push(board.map(row=>row.join('')));
        return;
    }
    for(let j=0;j<n;j++)
    {
        if(isSafe(board,row,j,n))
        {
            board[row][j]='Q';
            NQueen(board,ans,row+1,n);
            board[row][j]='.';
        }
    }
}
var solveNQueens = function(n) {
    let board=Array.from({length:n},()=>Array(n).fill('.'));
    let ans=[];
    NQueen(board,ans,0,n);
    return ans;
    
};