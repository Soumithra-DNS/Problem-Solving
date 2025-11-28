#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    int ans = 0;
    ans += (( 7 - mp.size())*m);

    for(auto i : mp){
        if(i.second < m){
            ans += ( m - i.second);
        }
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
