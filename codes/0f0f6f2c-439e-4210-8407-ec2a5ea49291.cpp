#include <bits/stdc++.h>
using namespace std;

int main() {

  int n,p;
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    cin>>p;
    arr.push_back(p);
  }
  int l=0,r=n-1,k=n-1;
  int ans[n];
  
  while(l<=r){
  if(abs(arr[l])>abs(arr[r])){
     ans[k]=pow(arr[l],2);
     l++;
  }
  else{
     ans[k]=pow(arr[r],2);
     r--;
  }
  k--;
  }
   for(int i=0;i<n;i++){
     cout<<ans[i]<<" ";
   }
  return 0;

}