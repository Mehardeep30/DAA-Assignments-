#include <bits/stdc++.h>
using namespace std;
long long kaneki(long long n,long long H,long long W){
    long long low=max(H,W);
    long long high=1e9;

    long long ans=INT_MAX;

    while(low<high){
        long long mid=(low+high)/2;

        long long rows=mid/H;
        long long cols=mid/W;

        if(rows>=1 && cols>=1 && rows*cols>=n){
            ans=min(ans,mid);
            high=mid-1;
        }
        else low=mid+1;
    }

    return low;
}
int main(){
    long long n = 9;
    long long H = 1;
    long long W = 8;

    // Print the answer
    cout << kaneki(n, H, W);
    return 0;
}
