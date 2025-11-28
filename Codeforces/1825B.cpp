
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , m; cin >> n >> m;
    if(n>m) swap(n,m);
    vector <int>arr(m*n);
    for(int i=0;i<m*n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int a=arr[0];
    int b=arr[1];
    int c=arr[n*m-1];
    int d=arr[n*m-2];
    long long ans1=((n*m)-n)*(c-a)+((d-a)*(n-1));
    long long ans2=((n*m)-n)*(c-a)+((c-b)*(n-1));
    cout<<max(ans1,ans2) <<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}






