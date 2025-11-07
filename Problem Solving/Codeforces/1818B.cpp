#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    if(n==1) cout << 1 <<endl;
    else if(n&1)  cout << -1 <<endl;
    else
    {
        for(int i=2;i<=n;i+=2)
        {
            cout << i <<" "<< i-1 <<" ";
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
