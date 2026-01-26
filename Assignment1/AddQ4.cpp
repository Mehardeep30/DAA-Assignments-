#include <bits/stdc++.h>
using namespace std;
int speciality(int k,vector<int> &arr,int n){
  sort(arr.begin(),arr.end());
  int sum=0;
  for(int i=0;i<n;i++){
    if(n-i-1>=k) sum+=arr[i];
  }

  return sum;
}
int main(){
  vector<int> arr={4,3,2,7,8};
  cout<<speciality(2,arr,arr.size());
  return 0;
}
