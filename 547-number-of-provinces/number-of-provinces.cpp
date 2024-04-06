class Solution {
public:
    void bfs(int src, vector<vector<int>> adj, vector<int>& vis)
    {
        queue<int> q;
        vis[src] = 1;
        q.push(src);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it: adj[node])
            {
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V, 0);
        vector<vector<int>> grid(V);
        
        int province = 0;
        
        //convert adjacency matrix to list
        for(int i = 0; i<V; i++)
        {
            for(int j = 0; j<V; j++)
            {
                if(i!=j && adj[i][j] == 1){
                    grid[i].push_back(j);
                    grid[j].push_back(i);
                }
            }
        }
        
        for(int i = 0; i<V; i++)
        {
            if(!vis[i]){
                bfs(i, grid, vis);
                province++;
            }
        }
        
        return province;
    }
};
