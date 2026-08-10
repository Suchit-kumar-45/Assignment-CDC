class Solution {
public:
    vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int minutes=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0)
        {
            return 0;
        }
        while(!q.empty() && fresh>0)
        {
            
            int size=q.size();
            while(size--)
            {
                pair<int,int>index=q.front();
                q.pop();
                int i=index.first;
                int j=index.second;
                for(int k=0;k<4;k++)
                {
                    int new_i=i+dir[k][0];
                    int new_j=j+dir[k][1];
                    if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && grid[new_i][new_j]==1)
                    {
                        grid[new_i][new_j]=2;
                        q.push({new_i,new_j});
                        fresh--;
                    }
                }
            }
            minutes++;
            

        }
        if(fresh==0)
        {
            return minutes;
        }
        return -1;
    }
};