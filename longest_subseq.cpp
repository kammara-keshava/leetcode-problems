#include<iostream>
#include<string>
#include<vector>
using namespace std;
int lss(string x,string y){
    int m=x.length();
    int n=y.length();
    vector<vector<int> > dp(m+1,vector<int> (n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];

            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
    string x,y;
    cin>>x>>y;
    cout<<lss(x,y);

}