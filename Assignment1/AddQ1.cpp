#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> &a,int N,int M,int X){
    int curr_or=0;
    int segments=1;

    for(int i=0;i<N;i++){
        if((curr_or | a[i]) <= X) curr_or |= a[i];
        else{
            segments++;
            curr_or=a[i];
        }
    }

    return (segments <= M);
}
int solve(vector<int> &a,int N,int M){
    int low=0,high=0;

    for(int x:a){
        low=max(low,x);
        high |= x;
    }

    while(low<high){

        int mid=(low+high)/2;
        if(possible(a,N,M,mid)) high=mid;
        else low=mid+1;

    }

    return low;
}
int main(){
    int N=3,M=2;
    vector<int> a={12,9,7};

    cout<<solve(a,N,M);
    return 0;
}
