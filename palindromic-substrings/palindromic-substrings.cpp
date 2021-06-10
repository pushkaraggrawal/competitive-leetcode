class Solution {
public:
    
//     bool isPalindrome(string s, int i, int j)
//     {
//         if(i==j) return 1;
//         while(i<j)
//         {
//             if(!(s[i]==s[j])) return 0;
//             i++;j--;
//         }
        
//         return 1;
//     }
    
    int countSubstrings(string s) {
        // cout<<isPalindrome(s,0,s.size()-1);
        // cout<<s.size();
        // //O(n*m) iterative solution
        // int ans=0; int n=s.size();
        // for(int i=0;i<=2*n-1;i++)
        // {
        //     int l=i/2; int r=(i+1)/2;
        //     while(l>=0 && r<n && s[l]==s[r])
        //     {
        //         cout<<"<"<<l<<" "<<r<<">";
        //         ans++;l--;r++; 
        //     }
        //     cout<<"x\n";
        // }
        // return ans;
        
             int n = s.length(),total = 0;;
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int i=n-1;i>=0;--i)
        {
            for(int j=i;j<n;++j)
            {
                if(i==j)
                    dp[i][j] = 1; // Ex: a,b
                
                if(i+1 < n && s[i] == s[i+1])
                    dp[i][i+1] = 1; // Ex : aa,bb
                
                if(i>0 && j<n-1 && s[i-1] == s[j+1] && dp[i][j] == 1)
                    dp[i-1][j+1] = 1; // Ex : xax,xabax
                
                total += dp[i][j];
            }
        }
        return total;
    }
};