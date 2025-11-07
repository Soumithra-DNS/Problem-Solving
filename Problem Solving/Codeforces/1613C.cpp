#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)

void solve()
{
    ll n, h; cin >> n >> h;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll low = 0, high = h, mid, ans= 1e18;
    while(high >= low)
    {
        mid = (high + low)/2;
        ll t_damage = 0;
        for(int i = 0; i < n; i++)
        {
            if(i != n - 1)
            {
                int d = v[i+1] - v[i];
                if(d < mid)
                    t_damage += d;
                else
                    t_damage += mid;
            }
            else
                t_damage += mid;
        }
        if(t_damage < h)
            low = mid + 1;
        else
        {
            ans = min( ans, mid);
            high = mid -1;
        }
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