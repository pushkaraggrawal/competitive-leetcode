class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        if(edges.size()<2) return edges[0][0];
        
        int c = edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1] ? edges[0][0] :  edges[0][1];
        
        for(auto edge : edges)
        {
            if(edge[0]!=c && edge[1]!=c) return 0;
        }
        
        return c;
    }
};