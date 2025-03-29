#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int coin(vector<int>& coins,int k){
    vector<int> dp(k+1,INT_MAX);
    dp[0]=0;
    for(int i:coins){
       for(int j=i;j<=k;j++){
        if(dp[j-i]!=INT_MAX){
            dp[j]=min(dp[j],dp[j-i]+1);
        }
       }
    }
    return (dp[k]==INT_MAX?-1:dp[k]);
}
int main(){
    vector<int> coins={1,2,5};
    int k=11;
    cout<<coin(coins,k);
}