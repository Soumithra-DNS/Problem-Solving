#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k=0; cin >> n;
    vector<int>a(n+1);

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        k=__gcd(k,abs(a[i]-i));
    }

    cout<< k << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
