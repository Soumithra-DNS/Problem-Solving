#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    ll n, x; cin >> n >> x;
    int cnt = 0;
    if((n + x) % 2){
        cout << cnt << "\n";
        return;
    }
    int y = x;
    if(x == 1){
        y++;
    }
    for(ll k = y; k <= n; k++){
        ll a = 2 * k - 2;
        if(a <= n){
            ll b = n % a;
            if(b == 0 && x == 2){
                cnt++;
            }
            if(b <= k && b == x){
                cnt++;
                //cout << cnt <<" "<< k << "\n";
            }else{
                b -= k;
                if(k - b == x){
                    cnt++;
                    //cout << cnt <<" "<< k << "\n";
                }
            }
        }else{
            ll b =2 * k - n;
            if(b == x){
                cnt++;
                //cout << cnt <<" "<< k << "\n";
            }
        }
    }
        
    cout << cnt  << "\n";
    return;
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