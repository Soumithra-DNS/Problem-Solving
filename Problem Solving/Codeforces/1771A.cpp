#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[0]==a[n-1])cout<<n*(n-1)<<endl;
    else cout<<count(a,a+n,a[0])*count(a,a+n,a[n-1])*2<<endl;
    
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}