class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> tab(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++) {tab[i][0]=0;tab[i][1]=1;}
        for(int i=0;i<=n;i++) {tab[0][i]=0;tab[1][i]=1;}
        
        for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
               tab[i][j]=tab[i-1][j]+tab[i][j-1];
            }
        }
        return tab[m][n];
        
    }
};