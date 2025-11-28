#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin>>n;
    vector<int>a(n-1),b(n);
    for(int i=0;i<n-1;i++) cin >> a[i];
    b[0]=a[0];
    for(int i=1;i<n-1;i++){
        b[i]=min(a[i-1],a[i]);
    }
    b[n-1]=a[n-2];
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;
}

int main()
{
    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #else
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
    #endif
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
