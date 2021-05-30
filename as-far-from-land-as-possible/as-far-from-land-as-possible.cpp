class Solution {
public:
    
    int maxDistance(vector<vector<int>>& grid) 
    {
//         0 : water
//         1 : land
            
//         find pacific's centre
//         distance is manhattan
        
//          bfs at all points
//         int n=grid.size();
        
        
//         //find all water points
//         vector<vector<int>> water;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(grid[i][j]==0) water.push_back({i,j});
//             }
//         }
        
//         vector<vector<int>> dist(n,vector<int>(n));
    
//         for(auto w:water)
//         {
//             vector<vector<int>> visited(n,vector<int> (n));
//             queue<vector<int>> Q; Q.push(w);
//             visited[w[0]][w[1]]=1; 
//             while(!Q.empty())
//             {
//                 auto f=Q.front();Q.pop(); 
//                 vector<vector<int>> off(n,vector<int>(n)); off.push_back({0,1});off.push_back({-1,0});off.push_back({1,0});off.push_back({0,-1});
//                 for(auto o:off)
//                 {
                    
//                     if(f[0]+o[0]>=n || f[1]+o[1]>=n || f[0]+o[0]<=-1 || f[1]+o[1]<=-1) continue;
//                     if(!visited[f[0]+o[0]][f[1]+o[1]]) 
//                     {
//                          visited[f[0]+o[0]][f[1]+o[1]] =1;
//                         cout<<'<'<<f[0]+o[0]<<" " <<f[1]+o[1]<<"> ";
//                         int x=f[0]+o[0], y=f[1]+o[1];
//                         if(grid[x][y]==1){continue;}
//                         if(dist[x][y]>=dist[f[0]][f[1]]+1)
//                             dist[x][y]=dist[f[0]][f[1]]+1;    
//                         Q.push({f[0]+o[0],f[1]+o[1]});
//                     }
//                 }
//                 cout<<endl;
//             }
//             cout<<endl;
//         }

        
//         cout<<"***DISTANCE MARIX***"<<endl;
//         for (int i = 0; i < dist.size(); i++)
//     {
//         for (int j = 0; j < dist[i].size(); j++)
//         {
//             cout << dist[i][j] << " ";
//         }   
//         cout << endl;
//     }
//         return -1;
            
//   
                int n=grid.size();
        
        
//         //find all land points
//         vector<vector<int>> land;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(grid[i][j]==1) land.push_back({i,j});
//             }
//         }
        
//         vector<vector<int>> dist(n,vector<int>(n));
//           for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 dist[i][j]=INT_MAX;
//                 if(grid[i][j]==1) dist[i][j]=0;
//             }
//         }
       
    
//         for(auto w:land)
//         {
//             vector<vector<int>> visited(n,vector<int> (n));
//             queue<vector<int>> Q; //Q.push(w);
//             for(auto z:land)
//             {
//                 Q.push(z);
//             }
            
//             visited[w[0]][w[1]]=1; int d=0;
//             while(!Q.empty())
//             {
//                 auto f=Q.front();Q.pop(); 
//                 vector<vector<int>> off(n,vector<int>(n)); off.push_back({0,1});off.push_back({-1,0});off.push_back({1,0});off.push_back({0,-1});
//                 d++;
//                 for(auto o:off)
//                 {
                    
//                     if(f[0]+o[0]>=n || f[1]+o[1]>=n || f[0]+o[0]<=-1 || f[1]+o[1]<=-1) continue;
//                     if(!visited[f[0]+o[0]][f[1]+o[1]]) 
//                     {
//                          visited[f[0]+o[0]][f[1]+o[1]] =1;
//                         int x=f[0]+o[0], y=f[1]+o[1];
//                         if(grid[x][y]==1){continue;}
//                         cout<<'<'<<f[0]+o[0]<<" " <<f[1]+o[1]<<"> ";
                        
//                         if(dist[x][y]>=dist[f[0]][f[1]]+d)
//                         {dist[x][y]=d;    cout<<"%Assigning "<<x<<","<<y<<'|'<<dist[x][y]<<"|%  ";}
//                         Q.push({f[0]+o[0],f[1]+o[1]});
//                     }
//                 }
//                 cout<<endl;
//             }
//             d=0;
//             cout<<endl;
//         }

        
//         cout<<"***DISTANCE MARIX***"<<endl;
//         for (int i = 0; i < dist.size(); i++)
//     {
//         for (int j = 0; j < dist[i].size(); j++)
//         {
//             cout << dist[i][j] << " ";
//         }   
//         cout << endl;
//     }
        
            
//         int ans=INT_MIN;
//         for (int i = 0; i < dist.size(); i++)
//     {
//         for (int j = 0; j < dist[i].size(); j++)
//         {
//          ans=max(ans,dist[i][j]);
//         }   
        
//     }
//         return ans;
        
        vector<pair<int,int>> land;
        priority_queue<pair<int,pair<int,int>>> Q;
        // cout<<n<<endl;
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX-100000));
        
        set<pair<int,int>> S;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1) {Q.push({0,{i,j}});dist[i][j]=0;}
                //else dist[i][j]=0;
            }
        }
   
    //             //cout<<"***DISTANCE MARIX***"<<endl;
    //     for (int i = 0; i < dist.size(); i++)
    // {
    //     for (int j = 0; j < dist[i].size(); j++)
    //     {
    //         cout << dist[i][j] << " ";
    //     }   
    //     cout << endl;
    // }
        
        
        while(!Q.empty())
        {
            auto f=Q.top();Q.pop();
            cout<<"#####"<<f.second.first<<","<<f.second.second<<":"<<endl;
            vector<pair<int,int>> off; off.push_back({0,1});off.push_back({-1,0});off.push_back({1,0});off.push_back({0,-1});
            assert(Q.size()<100000);
            for(auto o:off)
            {
                assert(Q.size()<100000);
                int x= f.second.first+o.first;int y= f.second.second+o.second;
                
                // cout<<x<<","<<y<<":"<<endl;
                if(x<0 || y<0 ||x>=n||y>=n) continue;
                
                if(dist[x][y]<=1+dist[f.second.first][f.second.second]) continue; 
                
                dist[x][y]=dist[f.second.first][f.second.second]+1;
                Q.push({-dist[x][y],{x,y}});
                cout<<x<<","<<y<<":"<<dist[x][y]<<endl;
                // if(S.count({x,y})) 
                // {
                 // cout<<x<<","<<y<<":"<<dist[x][y]<<"  "<<f.second.first<<","<<f.second.second<<":"<<endl;assert(false);}
                S.insert({x,y});
                
                assert(Q.size()<100000);
            }
            
        }
        
        
            
//         cout<<"***DISTANCE MARIX***"<<endl;
//         for (int i = 0; i < dist.size(); i++)
//     {
//         for (int j = 0; j < dist[i].size(); j++)
//         {
//             cout << dist[i][j] << " ";
//         }   
//         cout << endl;
//     }
        
         int ans=INT_MIN;
        for (int i = 0; i < dist.size(); i++)
    {
        for (int j = 0; j < dist[i].size(); j++)
        {
         ans=max(ans,dist[i][j]);
        }}   
        
        if(ans==INT_MAX-100000 || ans==0) return -1;
        return ans;
    }
    
    
};