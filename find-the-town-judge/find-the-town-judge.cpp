class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> A(n+1);
        for(auto t:trust)
        {
            A[t[1]]++;A[t[0]]--;
        }
        
        for(int i=1; i<n+1;i++)
        {
            if(A[i]==n-1)return i;
        }
        
        return -1;
    }
};