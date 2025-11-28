#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long int n, k, x, ans; cin >> n >>k;
    x=k/2;
    ans=(n/k)*k;
    if(ans<n)
    {
        if(n-ans>=x) ans+=x;
        else  ans+=(n-ans);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--) solve();
    return 0;
}
