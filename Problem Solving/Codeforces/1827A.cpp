#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long ans=1;
    for(int i=0;i<n;i++){
        int c=0;
        if(a[i]>b[i]){
           c=(lower_bound(b.begin(),b.end(),a[i])-b.begin())-i;
        }
        ans=(ans*c);
        ans%=mod;
    }
    cout<< ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
