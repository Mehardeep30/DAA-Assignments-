#include <bits/stdc++.h>
using namespace std;
int maxSubarrauSumOptimalK(vector<int> &arr,int n,int k) {
    int sum=0;
    int i=0;
    int j=0;
    int maxlen=0;
    while (j<n) {
        sum+=arr[j];
        while (i<=j && sum>k) {
            sum-=arr[i];
            i++;
        }
        if (sum==k) maxlen=max(maxlen,j-i+1);
        j++;
    }
    return maxlen;
}
int main() {
    vector<int> arr = {1, 2, 1, 1, 1};
    int k = 3;

    cout << maxSubarrauSumOptimalK(arr, arr.size(), k);
    return 0;
}
