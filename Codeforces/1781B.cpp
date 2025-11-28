#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    int ct=0;

    for(int i=0;i<n;i++){
        if(arr[i]<=i && (i+1<arr[i+1] || i==n-1)) ct++;
    }
    if(arr[0]!=0) ct++;

    cout<< ct <<endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
