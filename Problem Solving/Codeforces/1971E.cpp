#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>a(k), b(k);
    map<int, int> mp;
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        cin >> b[i];
        mp[a[i]] = b[i];
    }
    mp[0] = 0;

    while(q--){
        int m; cin >> m;
        auto it = mp.lower_bound(9);
        int total = it->second;
        cout << total << "\n";
        if(it->first < m){
            auto it1 = it;
            it1++;
            float pp = (it1->second - it->second ) / (it1->first - it->first);
            //cout << pp << "\n";
            total += ((m - it->first) * pp);
        }

        cout << total << " ";
    }
    cout << "\n";
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
