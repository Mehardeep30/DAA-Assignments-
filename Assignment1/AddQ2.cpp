int ValidSubseq(int n,vector<int> &arr){
    sort(arr.begin(),arr.end());
    int ans=0;
    int l=0;

    for(int r=0;r<n;r++){
        while(arr[r]-arr[l]>10) l++;

        ans=max(ans,r-l+1);
    }

    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,100};
    cout<<ValidSubseq(arr.size(),arr);
    return 0;
}
