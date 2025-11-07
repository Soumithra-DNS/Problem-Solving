#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int>a(n+1);
    int zero=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==0)
            zero++;
    }
    if(zero==0) cout<< 0 <<endl;
    else if(zero<=(n+1)/2) cout<< 0 << endl;
    else
    {
        int mx=*max_element(a.begin(),a.end());
        if(mx==1)  cout << 2 << endl;
        else cout<< 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


