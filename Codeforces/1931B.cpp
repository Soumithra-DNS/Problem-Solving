#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n; cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if( i == 0){
            v[i] = x;
        }else{
            v[i] = x + v[i - 1];
        }
    }
    ll x = v[ n - 1] / n;
    if(v[n - 1] % n){
        no
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] < (i + 1)*x ){
            no
            return;
        }
    }
    yes
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
