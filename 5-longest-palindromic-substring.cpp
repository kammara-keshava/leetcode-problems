class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int st=0,ml=1;
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                st=i;
                ml=2;
            }
        }
            for(int len=3;len<=n;len++){
                for(int i=0;i<=n-len;i++){
                    int j=i+len-1;
                    if(s[i]==s[j]&&dp[i+1][j-1]){
                        dp[i][j]=true;
                        st=i;
                        ml=len;
                    }
                }
            }

        return s.substr(st,ml);
    }
};
