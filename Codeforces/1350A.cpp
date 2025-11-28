#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,k,ans=0;
    cin >> n >> k;
    ans=n;
    if(n%2==0)
    {
        ans+=(k*2);
    }
    else
    {
       long long int i=3;
       while(1)
       {
           if(n%i==0)
           {
               ans+=i;
               k--;
               break;
           }
           i+=2;
       }
       ans+=(k*2);
    }
    cout << ans << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
