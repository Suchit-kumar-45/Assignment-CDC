/**
 * @param {character[][]} grid
 * @return {number}
 */
 function dfs(grid,m,n,i,j)
 {
    if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0')
    {
        return;
    }
    grid[i][j]='0';
    dfs(grid,m,n,i+1,j);
    dfs(grid,m,n,i-1,j);
    dfs(grid,m,n,i,j+1);
    dfs(grid,m,n,i,j-1);
 }
var numIslands = function(grid) {
    let m=grid.length;
    let n=grid[0].length;
    let count=0;
    for(let i=0;i<m;i++)
    {
        for(let j=0;j<n;j++)
        {
            if(grid[i][j]=='1')
            {
                count++;
                dfs(grid,m,n,i,j);
            }
        }
    }
    return count;
    
};