#include <bits/stdc++.h>
using namespace std;

long long int f(long long int i,vector<long long int> &dp){
  if(i==1 || i==0 ) return 1;
  if(dp[i] != -1) return dp[i];
  return  dp[i] =  (f(i-2,dp)%1000000007)+ (f(i-1,dp)%1000000007);
}
int main() {
 long long int n;
 cin>>n;
 vector<long long int> dp(n+1,-1);
 long long int ans = f(n,dp);
  
 cout<<ans;
  return 0;

}