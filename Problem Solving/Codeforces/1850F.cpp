#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n + 1);
    map<int, int> mp, mp1;
    int dis, cnt = 0, one = 0;
    for(int i = 0; i < n; i++){
        cin >> dis;
        if(dis <= n){
            mp[dis]++;
        }
    }
    for(auto it : mp){
        for(int i = it.first; i <= n; i += it.first){
            mp1[i] += it.second;
            cnt = max(cnt, mp1[i]);
        }
    }



    cout << cnt << "\n";
    
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
