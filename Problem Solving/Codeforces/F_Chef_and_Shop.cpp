#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    v.push_back({0,0});
    for(int i = 0; i <= n; i++){
        int c, w; cin >> c >> w;
        v.push_back({w,c});
    }

    sort(v.begin(), v.end());

    vector<ll> cnt(n + 2);
    for(int i = 1; i <= n; i++){
        cnt[i] = cnt[i - 1] + v[i].second;
    }
    ll W = 0, ans = INT_MIN;
    int l = 0;
    for(int i = 0; i <= n; i++){
        W += v[i].first;
        if(cnt[i] - cnt[l] > k){
            while(cnt[i] - cnt[l] > k){
                W-= v[l].second;
                l++;
            }
        }

        ans = max(ans, W);
    }

    cout << ans << "\n";






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
