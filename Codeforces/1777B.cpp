#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n; cin >> n;
    long long int m=1e9+7;
    long long ans=n*(n-1);
    for(int i=1;i<=n;i++)
    {
        ans*=i;
        ans%=m;
    }
    cout<< ans << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


