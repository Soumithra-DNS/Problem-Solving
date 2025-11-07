#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int>a(n+1);
    int sum=0, temp;
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin >> temp;
        a[i]+=a[i-1]+temp;
    }
    while(q--)
    {
      int l, r, k, t_sum; cin >> l >> r >> k;
        t_sum=(a[n]-(a[r]-a[l-1]))+((r-l+1)*k);

        if(t_sum & 1) cout<< "YES" <<endl;
        else  cout<< "NO" <<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


