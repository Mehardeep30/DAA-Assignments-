#include <bits/stdc++.h>
using namespace std;
int MedianGame(vector<int> &arr,int n){
  int min_val=INT_MAX;
  int max_val=INT_MIN;

  for(int i=0;i<n;i++){
      min_val=min(min_val,arr[i]);
      max_val=max(max_val,arr[i]);
  }

  return min_val+max_val;
}
int main(){
  vector<int> arr={1,2,3,4};
  cout<<MedianGame(arr,arr.size());
  return 0;
}
