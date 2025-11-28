#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ans=1; cin >> n;
    while(ans<=n) ans*=2;
    ans/=2;
    cout<<--ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}


