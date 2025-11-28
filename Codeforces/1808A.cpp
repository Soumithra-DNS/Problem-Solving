#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int  a, b, z, ans=0; cin >> a >> b;
    for(int i=a;i<=min(b,a+100);i++)
    {
        int x=i,mx=0,mi=10;
        while(x>0)
        {
            mx=max(x%10,mx);
            mi=min(x%10,mi);
            x=x/10;
        }
        if(ans<=mx-mi) ans=mx-mi, z=i;
    }
    cout<< z << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
