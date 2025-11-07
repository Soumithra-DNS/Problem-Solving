#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    if(n==1)
    {
        cout<< "0" << endl;
    }
    else
    {
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++) ans=max(ans,arr[i]-arr[0]);
        for(int i=0;i<n-1;i++) ans=max(ans,arr[n-1]-arr[i]);
        for(int i=0;i<n-1;i++) ans=max(ans,arr[i]-arr[i+1]);
        cout<< ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
