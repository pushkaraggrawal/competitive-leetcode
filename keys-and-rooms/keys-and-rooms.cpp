class Solution {
public:
    
    
    
    void dfs(  vector<int> &visited,vector<vector<int>> rooms, int u)
    {
        
        if(visited[u]) return;
        visited[u] =1;
        for(int v:rooms[u])
        {
            dfs(visited,rooms,v);
        }
        
        
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        vector<int> visited(rooms.size());
        dfs(visited,rooms,0);
        
        for(int i=0;i<rooms.size();i++)
        {
            //cout<<"visited[i]"
            if(visited[i]==0) return 0;
        }
        
        return 1;
    }
};