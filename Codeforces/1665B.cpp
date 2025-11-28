#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

void solve()
{
    int n; cin >> n;
    map<ll,ll>m;
    int maX=0;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        m[x]++;
        if(m[x]>maX) maX = m[x];
    }
    int operation = 0;
    while(maX < n){
        operation++;
        operation += maX;
        maX *= 2;
        if(maX>n) operation -= (maX - n);

    }
    cout<< operation << endl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}