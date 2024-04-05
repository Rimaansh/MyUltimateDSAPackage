class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int maxTime = 0;
        int freshCount = 0, rottenCount = 0;

        vector<vector<int>> vis(n, vector<int>(m, 0));

        //{{row, col}, time} -- the DS we are using
        queue<pair<pair<int, int>, int> > q;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
                else if(grid[i][j] == 1) freshCount++;
            }
        }

        int delrow[] = {+1, 0, -1, 0};
        int delcol[] = {0, -1, 0, +1};
        //for each direction we have to travel, use delrow and delcol to adjust indices

        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            q.pop();

            maxTime = max(time, maxTime);

            //there are a total of 4 directions to go to
            for(int i = 0; i<4; i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                    grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0)
                    {
                        vis[nrow][ncol] = 2;
                        q.push({{nrow, ncol}, time+1});
                        rottenCount++;
                    }
            }
        }

        if(rottenCount == freshCount) return maxTime; //implies, all oranges got rotten
        else return -1;    
    }
};