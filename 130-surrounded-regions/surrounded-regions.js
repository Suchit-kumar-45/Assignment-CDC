/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
 function dfs(board,i,j,m,n)
 {
    if(i<0 || i>=m || j<0 || j>=n || board[i][j]=='X' || board[i][j]=='#')
    {
        return;
    }
    board[i][j]='#';
    dfs(board,i+1,j,m,n);
    dfs(board,i-1,j,m,n);
    dfs(board,i,j+1,m,n);
    dfs(board,i,j-1,m,n);
 }
var solve = function(board) {
    let m=board.length;
    let n=board[0].length;
    for(let j=0;j<n;j++)
    {
        if(board[0][j]=='O')
        {
            dfs(board,0,j,m,n);
        }
        if(board[m-1][j]=='O')
        {
            dfs(board,m-1,j,m,n);
        }
        
    }
    for(let i=0;i<m;i++)
    {
        if(board[i][0]=='O')
        {
            dfs(board,i,0,m,n);
        }
        if(board[i][n-1]=='O')
        {
            dfs(board,i,n-1,m,n);
        }
        
    }
    for(let i=0;i<m;i++)
    {
        for(let j=0;j<n;j++)
        {
            if(board[i][j]=='O')
            {
                board[i][j]='X';
            }
            if(board[i][j]=='#')
            {
                board[i][j]='O';
            }
        }
    }
    

    
};