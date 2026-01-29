#include <bits/stdc++.h>
using namespace sts;
int binarySearch(vector<int> &arr,int n,int t) {
    int low=0;
    int high=n-1;
    while (low<=high) {
        int mid=(low+high)/2;
        if (arr[mid]==t) return mid;
        if (arr[mid]>t) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int idx = binarySearch(arr, arr.size(), 7);
    cout << idx;
    return 0;
}
