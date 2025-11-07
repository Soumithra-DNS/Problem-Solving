
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int>a(55,0);
    while(n--)
    {
        int l, r; cin >> l >> r;
        if(l<=k and r>=k)
        {
            a[l]++;
            a[r+1]--;
        }
    }
    for(int i=1;i<55;i++) a[i]+=a[i-1];
    if((a[k]>a[k-1]) && (a[k]>a[k+1])) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


