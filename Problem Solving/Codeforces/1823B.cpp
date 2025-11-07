
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    int a[n+1];
    int ans=0, temp;
    for(int i=1;i<=n;i++)
    {
        cin >> temp;
        if((temp-i)%k!=0)
            ans++;
    }
    if(ans>2)
        cout<<"-1"<<endl;
    else
        cout<< ans/2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
