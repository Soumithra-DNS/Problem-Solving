#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ans=1; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        int ans=a[i],k=0;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            else  k=k^a[j];
        }
        if(ans==k)
        {
            cout<<k<<endl;
            break;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}



